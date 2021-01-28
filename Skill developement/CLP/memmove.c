#include<string.h>
#include<stdio.h>

void print(char *s, int n){
    for(int i=0; i<n; i++)
        printf("%c", s[i]);
    printf("\n");
}

int main(void){
    char a[4] = {'a', 'b', 'c', 'd'}, b[4], c[4];
    memcpy(b, a, 4);
    memcpy(c, b, 4);
    memmove(b, b+1, 3);
    memmove(c+1, c, 3);
    print(b, 4);
    print(c, 4);
    return 0;
}

