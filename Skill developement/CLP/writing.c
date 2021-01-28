#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<time.h>
#ifndef _MSC_VER
#include<unistd.h>
#endif

int main(){
    int arr[10];
    srand(time(NULL));
    for(int i=0; i<10; i++){
        arr[i] = rand() % 10 + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    int out = open("arr.dat", O_CREAT | O_TRUNC | O_WRONLY, 0666);
    if(out > 0){
        int n = write(out, arr, sizeof(arr));
        printf("%d bytes written\n", n);
        close(out);
    }
    return 0;
}

