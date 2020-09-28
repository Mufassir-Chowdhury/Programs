#include<stdio.h>
int ss[100001];
int main(){
    int s, v, t, i=0, j;
    while(scanf("%d %d", &v,&t) != -1){
        s = 2*v*t;
        ss[i++] = s;
    }
    for(j=0; j<i; j++){
        printf("%d\n", ss[j]);
    }


    return 0;
}