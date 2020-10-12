#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[], char **envp){
    for(int i=0; i<argc; i++)
        printf("\nargv[%d] = \'%s\'", i, argv[i]);
    printf("\n\n");
    char **p = envp;
    char *path = "Path=";
    int len = strlen(path);
    while(*p != NULL){
        if(strncmp(path, *p, len) == 0){
            printf("%s\n", *p);
            break;
        }
        p++;
    }
    return 0;
}

