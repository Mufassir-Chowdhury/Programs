#include<stdio.h>
int m[15];
int main(){
    int n, i, a, b;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d %d", &a, &b);
        if(a<b){
            m[i-1] = 60;
        } else if(a>b){
            m[i-1] = 62;
        }  else{
            m[i-1] = 61;
        }
    }
    for(i=0; i<n; i++){
        printf("%c\n", m[i]);
    }


    return 0;
}
