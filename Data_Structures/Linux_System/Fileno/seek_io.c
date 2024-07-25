#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include "tlpi_hdr.h"

int 
main(int argc, char const *argv[])
{
    /* code */
    size_t len;
    off_t offset;
    int fd, ap, j;
    char *buf;
    ssize_t numRead, numWritten;

    if (argc < 3 || strcmp(argv[1], "--help") == 0) {
        usageErr("%s file {r<length>|R<length>|w<string>|s<offset>}...\n", argv[0]);
    }
    return 0;
}
