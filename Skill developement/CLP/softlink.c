#include <sys/stat.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        fprintf(stderr, "usage: %s filename\n", argv[0]);
        return 1;
    }
    struct stat st;
    if(stat(argv[1], &st) == 0){
        if(st.st_mode & S_IFREG){
            char newname[16];
            srand(time(NULL));
            sprintf(newname, "link_%d", rand());
            if(symlilnk(argv[1], newname) != 0){
                fprintf(stderr, "link failed: %s\n", strerror(errno));
                return 3;
            }
            printf("Link \"%s\" created\n", newname);
        }
    } else{
        fprintf(stderr, "%s does not exist or is not a regular file\n", argv[0]);
        return 2;
    }
    return 0;
}