#include<stdlib.h>
#include<stdio.h>

int main(void){
    int v = system(NULL);
    printf("Shell is %savailable\n", v? "" : "not ");
    if(v){
        v = system("echo MARY had a little process");
        printf("Child process returned %d\n", v);
    }
    return 0;
}

