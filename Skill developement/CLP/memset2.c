#include<string.h>
#include<stdio.h>

int main(void){
    short int t[4];
    memset(t, 1, sizeof(t));
    printf("%d %d %d %d\n", t[0], t[1], t[2], t[3]);
    return 0;
}

