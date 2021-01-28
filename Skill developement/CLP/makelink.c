#include<sys/stat.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define _WIN32_WINNT 0x600
#include<windows.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        fprintf(stderr, "usage: %s filename\n", argv[0]);
        return 1;
    }
    long Attrs = GetFileAttributes(argv[1]);
    if((Attrs != INVALID_FILE_ATTRIBUTES) && !(Attrs & FILE_ATTRIBUTE_DIRECTORY) && !(Attrs & FILE_ATTRIBUTE_REPARSE_POINT)){
        char newname[16];
        srand(time(NULL));
        sprintf(newname, "link_%d", rand());
        if(CreateSymbolicLink(newname, argv[1], 0) == 0){
            wchar_t msg[256];
            FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), msg, 256, NULL);
            fprintf(stderr, "link failed: %ws\n", msg);
            return 3;
        }
        printf("Link \"%s\" created\n", newname);
    } else{
        fprintf(stderr, "%s does not exist or is not a regular file\n", argv[1]);
        return 2;
    }
    return 0;
}
