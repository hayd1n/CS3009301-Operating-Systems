#include <fcntl.h>
#include <linux/cdrom.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>

int main() {
    // Open the CD-ROM device
    int cdrom_fd = open("/dev/cdrom", O_RDONLY);
    if ( cdrom_fd == -1 ) {
        perror("Error opening CD-ROM device");
        exit(EXIT_FAILURE);
    }

    // Unlock the CD-ROM door
    if ( ioctl(cdrom_fd, CDROM_LOCKDOOR, 0) == -1 ) {
        perror("Error unlocking CD-ROM door");
        close(cdrom_fd);
        exit(EXIT_FAILURE);
    }

    // Eject the CD-ROM
    if ( ioctl(cdrom_fd, CDROMEJECT, 0) == -1 ) {
        perror("Error ejecting CD-ROM");
        close(cdrom_fd);
        exit(EXIT_FAILURE);
    }
    printf("CD-ROM ejected successfully.\n");

    // Close the CD-ROM device
    close(cdrom_fd);

    return 0;
}