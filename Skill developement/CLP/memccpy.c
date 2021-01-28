#include<string.h>
#include<stdio.h>

int main(void){
    char s1[] = {'a', 'b', 'c', 'd'};
    char s2[] = {'x', 'x', 'x', 'x'};
    char *p = memccpy(s2, s1, 'c', 4);
    printf("%c%c%c%c %c\n", s2[0], s2[1], s2[2], s2[3], *p);
    return 0;
}

