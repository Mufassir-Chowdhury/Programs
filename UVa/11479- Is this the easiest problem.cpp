#include<stdio.h>

int main(){
    long long int a, b, c;
    int T, i;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a<=0 || b<=0 || c<=0){
            printf("Case %d: Invalid\n", i);
        } else if(!((a+b>c) && (a+c>b) && (b+c>a))){
            printf("Case %d: Invalid\n", i);
        } else if((a==b)&&(b==c)){
            printf("Case %d: Equilateral\n", i);
        } else if(((a==b) && (a!=c)) || ((a==c)&&(a!=b)) || ((b==c)&&(a!=b))){
            printf("Case %d: Isosceles\n", i);
        } else{
            printf("Case %d: Scalene\n", i);
        }
    }
    return 0;
}