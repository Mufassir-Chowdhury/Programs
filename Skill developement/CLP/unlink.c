#include<sys/stat.h>
#include<errno.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        fprintf(stderr, "usage: %s linkname\n", argv[0]);
        return 1;
    }
    struct stat st;
    if((lstat(argv[1], &st) == 0) && S_ISLINK(st.st_mode)){
        if(unlink(argv[1]) != 0){
            fprintf(stderr, "delete failed: %s\n", strerror(errno));
            return 3;
        }
        printf("Link \"%s\" deleted\n", argv[1]);
    } else{
        fprintf(stderr, "%s does not exist or is not a soft link\n", argv[1]);
        return 2;
    }
    return 0;
}