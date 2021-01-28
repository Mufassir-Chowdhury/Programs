#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i, j, t, flag;
    char s1[21], s2[21];
    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        flag = 0;
        scanf("%s", s1);
        scanf("%s", s2);
        if(strlen(s1)!=strlen(s2)) flag =1;
        for(j=0; j<strlen(s1); j++){
            s1[j] = toupper(s1[j]);
            s2[j] = toupper(s2[j]);
        }
        for(j=0; j<strlen(s1); j++){
            if(s1[j]=='A' ||s1[j]=='E' ||s1[j]=='I' ||s1[j]=='O' ||s1[j]=='U') continue;
            if(s1[j] != s2[j]) flag =1;
        }
        if(flag) printf("No\n");
        if(!flag) printf("Yes\n");
    }

    return 0;
}