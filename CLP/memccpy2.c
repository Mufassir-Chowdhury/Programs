#include<string.h>
#include<stdio.h>

int main(void){
    short int t1[] = {1, 2, 3};
    short int t2[] = {0, 0, 0};
    char *p = memccpy(t2, t1, 0, sizeof(t1));
    printf("%d %d %d %d\n", t2[0], t2[1], t2[2], *p);
    return 0;
}

