#include<string.h>
#include<stdio.h>

int main(void){
    char hamlet[] = "To be, or not to be: that is the question\n"
                    "Whether 'tis nobler in the mind to suffer\n"
                    "The slings and arrows of outrageous fortune,\n"
                    "Or to take arms against a sea of trouble\n"
                    "And by opposing end them?";
    char *delim = ",:? \n";
    char *token = strtok(hamlet, delim);
    while(token){
        printf("%s ", token);
        token = strtok(NULL, delim);
    }
    return 0;
}

