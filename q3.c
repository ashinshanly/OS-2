//To ensure the child process print first you need a kind of synchronization in between both processes, and there is a lot of system primitives that have a semantic of "communication" between processes (for example locks, semaphores, signals, etc). I doubt one of these is to be used here.
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int a = fork();
    if(a<0){
        printf("Error!");
        exit(1);
    }
    else if(a==0){
        printf("HELLO!\n");
    }
    else{
        for(i=0;i<100000;i++);
        printf("GOODBYE!\n");
    }
    return 0;
}