#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool is_armstrong_number(int candidate){
    int length = snprintf(NULL, 0, "%d", candidate);
    char* str = malloc(length + 1);
    snprintf(str, length + 1, "%d", candidate);
    int sum = 0;
    for(int i=0; i<length; i++){
        sum += pow(str[i]-'0', length);
    }
    free(str);
    return candidate == sum;
}

int main(){
    if(is_armstrong_number(9))
        printf("Test 1 Passed\n");
    else 
        printf("Test 1 Failed!\n");
    if(is_armstrong_number(10))
        printf("Test 2 Passed\n");
    else 
        printf("Test 2 Failed!\n");
    if(is_armstrong_number(153))
        printf("Test 3 Passed\n");
    else 
        printf("Test 3 Failed!\n");
    if(is_armstrong_number(154))
        printf("Test 4 Passed\n");
    else 
        printf("Test 4 Failed!\n");
}