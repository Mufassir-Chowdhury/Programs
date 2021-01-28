#include<stdarg.h>
#include<stdio.h.>
#include<string.h>
void line(int n){
    putchar('+');
    n -= 2;
    while(n--)
        putchar('-');
    putchar('+');
    putchar('\n');
}
int frprintf(char *format, ...){
    va_list list;
    int len;
    char buf[1024];
    va_start(list, format);
    vsprintf(buf, format, list);
    len = strlen(buf) + 4;
    line(len);
    printf("| %s |\n", buf);
    line(len);
    va_end(list);
    return len*3;
}

int main(){
    frprintf("Hello World!");
    frprintf("Marry had %d little %s", 2, "hippos");
    return 0;
}
