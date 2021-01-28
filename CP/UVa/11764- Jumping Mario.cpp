#include<stdio.h>
int TC1[30], TC2[30];
int main(){
    int T, N, i, high, low, j, init, Height, k;
    scanf("%d",&T);
    for(i=0; i<T; i++){
        high = low = 0;
        scanf("%d", &N);
        scanf("%d", &Height);
        for(j=1; j<N; j++){
            scanf("%d", &init);
            if(init>Height) high++;
            else if(init<Height) low++;
            Height = init;
        }
        TC1[i] = high;
        TC2[i] = low;
    }
    for(k=0; k<i; k++){
        printf("Case %d: %d %d\n", k+1, TC1[k], TC2[k]);
    }



    return 0;
}