/*
 * Part of Astonia Server 3.5 (c) Daniel Brockhaus. Please read license.txt.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-result"

int main(void) {
    int handle, val;
    char buf[256];

    handle = open("vers.c", O_RDWR);
    if (handle == -1) {
        handle = open("vers.c", O_WRONLY | O_CREAT, 0644);
        val = (3 << 24) + (5 << 16);
    } else {
        read(handle, buf, 250);
        val = atoi(buf + 13);
        lseek(handle, 0, 0);
    }

    sprintf(buf, "int VERSION = %d;\nchar *VER_DATE = __DATE__;\nchar *VER_TIME = __TIME__;\n", val + 1);
    write(handle, buf, strlen(buf));
    close(handle);
    return 0;
}

#pragma GCC diagnostic pop
