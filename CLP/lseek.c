#include<stdio.h>
#include<fcntl.h>
#ifndef _MSC_VER
#include<unistd.h>
#endif

int main(){
    int fd = open("newfile", O_TRUNC | O_CREAT | O_WRONLY, 0666);
    if(fd > 0){
        long pos = lseek(fd, 9, SEEK_SET);
        char c = 1;
        int wrtn = write(fd, &c, 1);
        close(fd);
        printf("position: %ld, written: %d\n", pos, wrtn);
        fd = open("newfile", O_RDONLY);
        if(fd > 0){
            while(read(fd, &c, 1) > 0)
                printf("%d ", c);
            printf("\n");
            close(fd);
        }
    }
    return 0;
}

