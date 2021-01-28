#include<stdio.h>
#include<errno.h>
#include<fcntl.h>

int main(){
    close(29887126);
    printf("%d\n", errno);
    return 0;
}

