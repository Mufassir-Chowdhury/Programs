#include<string.h>
#include<stdio.h>

typedef struct {
    int i;
    char c;
} str_t;

int main(void){
    str_t tab1[5], tab2[5];
    for(int i=0; i<5; i++){
        tab1[i].i = i;
        tab1[i].c = 'a' + i;
    }
    memcpy(tab2, tab1, sizeof(tab2));
    for(int i=0; i<5; i++)
        printf("%d %c\n", tab2[i].i, tab2[i].c);
    return 0;
}

