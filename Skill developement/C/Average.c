#include<stdio.h>
#include<stdarg.h>

int average(int n, ...){
    va_list list;
    va_start(list, n);
    int sum = 0;
    int count = n;
    while(count--){
        sum += va_arg(list, int);
    }
    va_end(list);
    return (double)sum/n;
}

int main(){
    printf("%d\n", average(2,1,3));
    printf("%d\n", average(10,1,1,1,1,1,1,1,1,1,1));
    return 0;
}