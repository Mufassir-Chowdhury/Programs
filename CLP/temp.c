#include<stdio.h>
#define FILE_NAME "file.tmp"

int main(void){
    FILE *f = fopen(FILE_NAME, "wb");
    if(f){
        unsigned char c = 0x02;
        fwrite(&c, 1, 1, f);
        c = 0x04;
        fwrite(&c, 1, 1, f);
        fclose(f);
        f = fopen(FILE_NAME, "rb");
        if(f){
            short i;
            fread(&i, 2, 1, f);
            fclose(f);
            printf("%d\n", i);
        }
        unlink(FILE_NAME);
    }
    return 0;
}

