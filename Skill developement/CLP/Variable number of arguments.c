#include<stdio.h>
#include<stdarg.h>

int sum(int n, ...){
    va_list list;
    va_start(list, n);
    int sum = 0;
    while(n--){
        sum += va_arg(list, int);
    }
    va_end(list);
    return sum;
}

int main(){
    printf("%d\n", sum(0));
    printf("%d\n", sum(2,1,3));
    printf("%d\n", sum(10,1,1,1,1,1,1,1,1,1,1));
    return 0;
}

