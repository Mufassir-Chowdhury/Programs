#include<fcntl.h>
#include<string.h>
#include<stdio.h>
#define FILE_NAME "file.tmp"

int main(void){
    int fd = open(FILE_NAME, O_WRONLY | O_CREAT);
    if(fd > 0){
        unsigned char c = 0x02;
        write(fd, &c, 1);
        c = 0x04;
        write(fd, &c, 1);
        close(fd);
        fd = open(FILE_NAME, O_RDONLY);
        if(fd > 0){
            short i;
            char buf[10];
            read(fd, &i, 2);
            close(fd);
            sprintf(buf, "%d\n", i);
            write(stdout, buf, strlen(buf));
        }
        unlink(FILE_NAME);
    }
    return 0;
}
