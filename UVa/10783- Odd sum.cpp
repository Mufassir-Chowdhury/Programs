#include<stdio.h>

int main(){
    int T, i, a, b, j, sum;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        sum = 0;
        scanf("%d %d", &a, &b);
        for(j=a; j<=b; j++){
            if(j%2==1) sum += j;
        }
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}