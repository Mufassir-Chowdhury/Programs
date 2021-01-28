#include<stdio.h>
#include<stdbool.h>

void prime_generator(bool *sieve){
    sieve[0] = false;
    sieve[1] = false;
    for(int i=2; i*i<=100; i++)
        if(sieve[i])
        for(int j=2*i; j<=100; j+=i)
            sieve[j] = false;
}

int main(){
    bool sieve[101];
    for(int i=0; i<101; i++)
        sieve[i] = true;
    prime_generator(sieve);
    for(int i=0; i<101; i++)
        printf("%d = %d\n", i, sieve[i]);
    return 0;
}