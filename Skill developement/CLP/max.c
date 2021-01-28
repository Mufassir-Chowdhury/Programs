#include<stdarg.h>
#include<stdio.h>

int max(int n, va_list vals){
    int m = va_arg(vals, int);
    while(--n){
        int k = va_arg(vals, int);
        if(k>m)
            m = k;
    }
    return m;
}

int va_max(int n, ...){
    va_list list;
    va_start(list, n);
    int r = max(n, list);
    va_end(list);
    return r;
}

int main(){
    int x = va_max(3, 1, 2, 3);
    printf("%d\n", x);
    return 0;
}

