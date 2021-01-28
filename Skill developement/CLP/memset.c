#include<string.h>
#include<stdio.h>

int main(void){
    char t[4];
    t[3] = '\0';
    memset(t, '*', 3);
    printf("%s\n", t);
    return 0;
}

