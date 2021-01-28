#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *in, *out;
    char ch;
    in = fopen("original.txt", "rb");
    out = fopen("Copy of original.txt", "wb");

    while(!feof(in)){
        ch = getc(in);
        if(!feof(in))
            putc(ch, out);
    }

    fclose(in);
    fclose(out);
    return 0;
}