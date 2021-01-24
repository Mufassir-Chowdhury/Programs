#include<stdio.h>

int factorial(int n){
    int mult = 1;
    for(int i=2; i<=n; i++)
        mult *= i;
    return mult;
}

int combination(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

void generate_rows(int row){
    for(int i=1; i<=row; i++)
        for(int j=1; j<=i; j++)
            printf("%d%c", combination(i-1, j-1), " \n"[i==j]);
}

int main(){
    int n;
    scanf("%d", &n);
    generate_rows(n);
    return 0;
}