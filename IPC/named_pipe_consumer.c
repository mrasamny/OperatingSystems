#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 25
 
int main(void)
{
    int fd;
    char read_msg[BUFFER_SIZE];

    fd = open("OS.fifo", O_RDONLY);
    /* read from the pipe */
    read(fd, read_msg, BUFFER_SIZE);
    printf("read %s",read_msg);

    /* close the read end of the pipe */
    close(fd);
    
    return 0;
}
