#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<unistd.h>

int main(void){
    int fd = open("__file__.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if(fd > 0){
        int fd2 = fcntl(fd, F_DUPFD, fd);
        if(fd2 > 0){
            printf("fd = %d, fd2 = %d\n", fd, fd2);
            for(int c = 'A'; c <= 'Z'; c++)
                write(c%2 ? fd: fd2, &c, 1);
            close(fd2);
        }
    } else{
        fprintf(stderr, "failed to open: %s\n", strerror(errno));
    } 
    return 0;
}