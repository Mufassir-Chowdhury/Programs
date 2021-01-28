#include<string.h>
#include<stdio.h>

void print(char *s, char *p){
    if(p)
        printf("[%ld]\n", p-s);
    else
        printf("(null)\n");
}

int main(void){
    char *str = "Mary had a little lamb", *p = strchr(str, 'a');
    while(p){
        print(str, p);
        p = strchr(p+1, 'a');
    }
    return 0;
}

