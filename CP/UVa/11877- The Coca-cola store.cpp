#include<stdio.h>
int fullb[11];
int main(){
    int emptyb, i=0, j;
    while(1){
        scanf("%d", &emptyb);
        if(emptyb == 0) break;
        fullb[i++] = emptyb/2;
    }
    for(j=0; j<i; j++){
        printf("%d\n", fullb[j]);
    }
    return 0;
}
