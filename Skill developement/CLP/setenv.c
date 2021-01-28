#include<stdlib.h>
#include<stdio.h>

int main(void){
    char *nam = "CPPINSTITUTE";
    char *val = "YES";
    char *prg = "./getenv2.c";
    int ret = system(prg);
    printf("red = %d\n---------------\n", ret);
    setenv(nam, val, 1);
    ret = system(prg);
    printf("red = %d\n---------------\n", ret);
    unsetenv(nam);
    ret = system(prg);
    printf("red = %d\n---------------\n", ret);
    return 0;
}

