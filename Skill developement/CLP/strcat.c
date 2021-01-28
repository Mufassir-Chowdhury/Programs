#include<stdarg.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char *concat(char *str, ...){
    if(str == NULL)
        return NULL;
    int length = strlen(str);
    va_list lenlist, strlist;
    va_start(lenlist, str);
    va_copy(strlist, lenlist);
    char *p = va_arg(lenlist, char *);
    while(p){
        length += strlen(p);
        p = va_arg(lenlist, char *);
    }
    va_end(lenlist);
    char *newstr = (char *) malloc(length + 1);
    strcpy(newstr, str);
    p = va_arg(strlist, char*);
    while(p){
        strcat(newstr, p);
        p = va_arg(strlist, char *);
    }
    va_end(strlist);
    return newstr;
}

int main(){
    char *s1 = concat("Mary ", "had ", "a little lamb", NULL);
    char *s2 = concat("Single string", NULL);
    printf("%s\n", s1);
    printf("%s\n", s2);
    free(s1);
    free(s2);
    return 0;
}