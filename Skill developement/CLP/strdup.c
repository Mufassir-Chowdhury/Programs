#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    char *s1 = "string";
    char *s2 = strdup(s1);
    printf("%s\n", strcmp(s1, s2) ? "not equal" : "equal");
    printf("%s\n", s1 == s2 ? "equal" : "not equal");
    free(s2);
    return 0;
}

