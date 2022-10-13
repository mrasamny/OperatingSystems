#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 25
 
int main(void)
{
    int fd;
    char write_msg[BUFFER_SIZE] = "Greetings\n";

    fd = open("OS.fifo", O_WRONLY);
    /* write to the named pipe */
    write(fd, write_msg, strlen(write_msg)+1);

    /* close the write end of the pipe */
    close(fd);

    return 0;
}
