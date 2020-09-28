#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        fprintf(stderr, "usage: %s linkname\n", argv[0]);
        return 1;
    }
    char realname[512];
    int len = readlink(argv[1], realname, sizeof(realname)-1);
    if(len > 0){
        realname[len] = '\0';
        printf("%s -> %s\n", argv[1], realname);
    } else {
        fprintf(stderr, "readlink failed: %s\n", strerror(errno));
        return 2;
    }
    return 0;
}