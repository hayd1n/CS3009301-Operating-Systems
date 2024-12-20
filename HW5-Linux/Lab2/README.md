# Lab2

This program demonstrates a simple Linux kernel module (`myioctl_driver.c`) that exposes custom IOCTL commands to interact with a counter. The kernel module allows three operations: resetting the counter, getting its value, and incrementing it by a user-specified amount. Two user-space applications (`myioctl_app.c` and `myioctl_reset.c`) are provided to interact with the module, allowing the user to view and modify the counter value. The program showcases basic kernel and user-space communication via IOCTL.

## Build

```bash
make
```

Or use `bear` to generate `compile_commands.json` for development.

```bash
bear -- make
```

## Loading kernel module

```bash
sudo insmod myioctl_driver.ko
```

After load the kernel module, remember the **major number** via `dmesg`.

```bash
sudo dmesg | grep myioctl
```

**Example:**

```
$ sudo dmesg | grep myioctl
[ 4088.546929] myioctl module loaded. Major number: 240
                                      remember this ^^^
```

Major number is `240`.

## Making device node

```bash
sudo mknod /dev/myioctl c 240 0
                          ^^^ major number
```

**Setting device permissions**

```bash
sudo chmod 666 /dev/myioctl
```

## Test program

### Increase counter

```bash
./myioctl_app
```

**Example:**

```
$ ./myioctl_app 
Current counter value: 0
Enter the value to increment the counter: 123
Updated counter value: 123
```

### Reset counter

```bash
./myioctl_reset
```

**Example:**

```
$ ./myioctl_reset 
Current counter value: 123
Reset counter value: 0
```