#include<stdio.h>

void sec(const char* time){
    int day, month, year, hour, minute, second;
    sscanf(time, "%d/%d/%d %d:%d:%d", &day, &month, &year, &hour, &minute, &second);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", day, month, year, hour, minute, second);
}

int main(){
    char date[] = "21/01/2021 00:03:00";
    sec(date);
    return 0;
}