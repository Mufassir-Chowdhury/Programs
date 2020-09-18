#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdarg.h>

#ifndef _MSC_VER
#include<unistd.h>
#define O_BINARY 0
#endif

int fdin = -1, fdout = -1;

void closefds(void){
    if(fdin != -1)
        close(fdin);
    if(fdout != -1)
        close(fdout);
}

void error(int ret, char *fmt, ...){
    char buf[512];
    va_list vlist;
    va_start(vlist, fmt);
    vsprintf(buf, fmt, vlist);
    va_end(vlist);
    fprintf(stderr, "ERROR: %s\n        %s\n", buf, strerror(errno));
    exit(ret);
}

int main(int argc, char *argv[]){
    char buffer[4096];

    if(argc != 3){
        fprintf(stderr, "Usage: %s source_file target_file\n", argv[0]);
        return 1;
    }
    atexit(closefds);
    fdin = open(argv[1], O_RDONLY | O_BINARY);
    if(fdin < 0)
        error(2, "Cannot open source file: %s", argv[1]);
    fdout = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_BINARY, 0666);
    if(fdout < 0)
        error(3, "Cannot open target file: %s", argv[2]);
    int rres;
    while((rres = read(fdin, buffer, sizeof(buffer))) > 0){
        int wres = write(fdout, buffer, rres);
        if(wres != rres)
            error(4, "Error when writing %s", argv[2]);
    }
    if(rres < 0)
        error(5, "Error while reading %s", argv[1]);
    if(close(fdin) < 0)
        error(6, "Error while closing %s", argv[1]);
    fdin = -1;
    if(close(fdout) < 0)
        error(7, "Error while closing %s", argv[2]);
    fdout = -1;
    return 0;
}