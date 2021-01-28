#include<string.h>
#include<stdio.h>

typedef struct {
    int i;
    char c;
} str_t;

int main(void){
    str_t tab1[4], tab2[4];
    for(int i=0; i<4; i++){
        tab1[i].i = i;
        tab1[i].c = 'a' + i;
    }
    memcpy(tab2 + 2, tab1, 2 * sizeof(str_t));
    memcpy(tab2, tab1 + 2, 2 * sizeof(str_t));
    for(int i=0; i<4; i++)
        printf("%d %c\n", tab2[i].i, tab2[i].c);
    return 0;
}

