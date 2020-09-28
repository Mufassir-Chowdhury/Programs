#include<stdlib.h>
#include<stdio.h>

int main(void){
    char *nam = "CPPINSTITUTE";
    char *val = getenv(nam);
    if(val == NULL){
        printf("%s undefined\n", nam);
        return 1;
    }
    printf("%s = %s\n", nam, val);
    return 0;
}

