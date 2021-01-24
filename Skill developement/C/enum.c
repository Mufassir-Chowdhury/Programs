#include<stdio.h>

enum colors {
    VIOLET,
    YELLOW,
    BLUE,
    RED,
    INDIGO,
    ORANGE,
    GREEN,
    LAST
}

int main(){
    int values[LAST];

    for(int i=0; i<LAST; i++)
        values[i] = i;
    return 0;
}