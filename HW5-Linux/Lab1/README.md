# Lab1

This program unlocks and ejects the CD-ROM tray on a Linux system by opening the CD-ROM device (`/dev/cdrom`) and using ioctl system calls. It ensures proper error handling for device access, unlocking, and ejection, and closes the device file descriptor after the operation.

## Build

```bash
gcc -o ioctl_eject ioctl_eject.c
```

## Run

```bash
sudo umount /dev/cdrom
./ioctl_eject
```