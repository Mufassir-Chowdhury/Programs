#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void){
    int pid = fork();
    if(pid == 0){
        printf("Hi, I'm a child with PID=%d and I am going to sleep for %d seconds...\n", getpid(), 5);
        sleep(5);
        printf("Hi again, I'm a child and I woke up!\n");
        return 27;
    } else if(pid == -1){
        fprintf(stderr, "Fork failed: %s\n", strerror(errno));
        return 1;
    }
    printf("Hi, I'm a parent and I am waiting for my child to finish...\n");
    int status, child = wait(&status);
    printf("PID=%d, retcode=%d\n", child, WEXITSTATUS(status));
    return 0;
}
