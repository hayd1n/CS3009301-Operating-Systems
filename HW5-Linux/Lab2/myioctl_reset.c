#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <unistd.h>

#define MYIOCTL_MAGIC 'k'
#define MYIOCTL_RESET _IO(MYIOCTL_MAGIC, 0)
#define MYIOCTL_GET_COUNT _IOR(MYIOCTL_MAGIC, 1, int)
#define MYIOCTL_INCREMENT _IOW(MYIOCTL_MAGIC, 2, int)

int main() {
    int fd = open("/dev/myioctl", O_RDWR);

    if ( fd == -1 ) {
        perror("Error opening myioctl device");
        return -1;
    }

    // Example: Get the current counter value
    int counter_value;
    ioctl(fd, MYIOCTL_GET_COUNT, &counter_value);
    printf("Current counter value: %d\n", counter_value);

    ioctl(fd, MYIOCTL_RESET);

    // Example: Get the updated counter value
    ioctl(fd, MYIOCTL_GET_COUNT, &counter_value);
    printf("Reset counter value: %d\n", counter_value);

    close(fd);

    return 0;
}