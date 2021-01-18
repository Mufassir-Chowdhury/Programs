#include<stdio.h>

typedef struct  
{
    int n;
    double e;
    char m;
} d;


int main(){
    d f;
    printf("%d %d %d %d", sizeof f.n, sizeof f.m, sizeof f.e, sizeof f);
}