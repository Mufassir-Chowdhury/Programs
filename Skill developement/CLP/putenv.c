#include<stdlib.h>
#include<stdio.h>

int main(void){
    char *nam = "CPPINSTITUTE";
    char *val = "YES";
    char *prg = "get.exe";
    int ret = system(prg);
    printf("ret = %d\n-----------------\n", ret);
    char buf[100];
    sprintf(buf, "%s=%s", nam, val);
    putenv(buf);
    ret = system(prg);
    printf("ret = %d\n-----------------\n", ret);
    sprintf(buf, "%s=", nam);
    putenv(buf);
    ret = system(prg);
    printf("ret = %d\n-----------------\n", ret);
    return 0;
}

