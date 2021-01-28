#include<stdio.h>
#include<fcntl.h>
#ifndef _MSC_VER
#include<unistd.h>
#endif

int main(){
    int arr[10];
    int in = open("arr.dat", O_RDONLY);
    if(in > 0){
        int n = read(in, arr, sizeof(arr));
        printf("%d bytes read in\n", n);
        close(in);
    }
    for(int i=0; i<10; i++)
        printf("%d ", arr[i]);
    return 0;
}

