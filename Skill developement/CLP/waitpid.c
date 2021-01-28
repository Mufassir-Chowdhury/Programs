#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        fprintf(stderr, "usage: %s seconds\n", argv[0]);
        return 1;
    }
    char *endptr;
    int secs = strtol(argv[1], &endptr, 10);
    if(secs <= 0 || *endptr != '\0'){
        fprintf(stderrm "argument must be an int greater than 0 - exiting\n");
        return 2;
    }
    printf("#%d will wait %d seconds... \n", getpid(), secs);
    for(int i=0; i<secs; i++){
        printf("#%d -> %d...\n", getpid(), secs - i);
        sleep(1);
    }
    printf("#%d completed\n", getpid());
    return 0;
}
