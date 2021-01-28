    #include<stdio.h>
     
    int main(){
        int j, i, T, P, Q, n, g, Weight, N;
        scanf("%d", &T);
        for(i=1; i<=T;i++){
            Weight =0;
            N=0;
            scanf("%d %d %d", &n, &P, &Q);
            for(j=1; j<=n; j++){
                scanf("%d", &g);
                Weight += g;
                if(Weight<=Q) N++;
            }
            if(N>P) N = P;
            printf("Case %d: %d\n", i,N);
        }
     
        return 0;
    }
