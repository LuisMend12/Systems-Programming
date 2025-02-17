#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fnctl.h>
#include <string.h>


int main()
{
    // User Group Other
    // R: 4 W: 2 X: 1

    int fd = open("random_text.txt", O_RDWR | O_CREAT, 0755);

    if(fd < 0) printf("Error!\n");

    char *writeThis = "\nI am writing to the file starting at the beginning";    write(fd, writeThis, strlen(writeThis));

    return 0;
}