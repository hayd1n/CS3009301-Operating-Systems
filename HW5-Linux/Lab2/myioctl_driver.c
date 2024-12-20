#include <linux/fs.h>
#include <linux/ioctl.h>
#include <linux/module.h>
#include <linux/uaccess.h>

#define MYIOCTL_MAGIC 'k'
#define MYIOCTL_RESET _IO(MYIOCTL_MAGIC, 0)
#define MYIOCTL_GET_COUNT _IOR(MYIOCTL_MAGIC, 1, int)
#define MYIOCTL_INCREMENT _IOW(MYIOCTL_MAGIC, 2, int)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hayden Chang");
MODULE_DESCRIPTION("Simple IOCTL Example");

static int myioctl_major;
static int count = 0;

// Function prototypes
static int myioctl_open(struct inode *inode, struct file *filp);
static int myioctl_release(struct inode *inode, struct file *filp);
static long myioctl_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);

// File operations structure
static const struct file_operations myioctl_fops = {
    .open = myioctl_open,
    .release = myioctl_release,
    .unlocked_ioctl = myioctl_ioctl,
};

// Module initialization
static int __init myioctl_init(void) {
    myioctl_major = register_chrdev(0, "myioctl", &myioctl_fops);

    if ( myioctl_major < 0 ) {
        pr_err("Failed to register character device\n");
        return myioctl_major;
    }

    pr_info("myioctl module loaded. Major number: %d\n", myioctl_major);
    return 0;
}

// Module cleanup
static void __exit myioctl_exit(void) {
    unregister_chrdev(myioctl_major, "myioctl");
    pr_info("myioctl module unloaded\n");
}

// Open function
static int myioctl_open(struct inode *inode, struct file *filp) {
    pr_info("myioctl device opened\n");
    return 0;
}

// Release function
static int myioctl_release(struct inode *inode, struct file *filp) {
    pr_info("myioctl device closed\n");
    return 0;
}

// IOCTL function

static long myioctl_ioctl(struct file *filp, unsigned int cmd, unsigned long arg) {
    int err = 0;
    int tmp;

    if ( _IOC_TYPE(cmd) != MYIOCTL_MAGIC ) {
        pr_err("Invalid magic number\n");
        return -ENOTTY;
    }

    switch ( cmd ) {
    case MYIOCTL_RESET:
        pr_info("IOCTL: Resetting counter\n");
        count = 0;
        break;
    case MYIOCTL_GET_COUNT:
        pr_info("IOCTL: Getting counter value\n");
        err = copy_to_user((int *)arg, &count, sizeof(int));
        break;
    case MYIOCTL_INCREMENT:
        pr_info("IOCTL: Incrementing counter\n");
        err = copy_from_user(&tmp, (int *)arg, sizeof(int));
        if ( err == 0 ) {
            count += tmp;
        }
        break;
    default:
        pr_err("Unknown IOCTL command\n");
        return -ENOTTY;
    }

    return err;
}

module_init(myioctl_init);
module_exit(myioctl_exit);