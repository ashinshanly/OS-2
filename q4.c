#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
    int i;
    int a = fork();
    if(a<0){
        printf("Error!");
        exit(1);
    }
    else if(a==0){
        char *args[]={"/bin/ls",NULL}; 
        execvp(args[0],args); 
        //execl("/bin/ls", "ls", "-l", (char*)NULL);
        //execv(args[0],args); 
        //execlp("ls", "ls", "-l", (char*)NULL);
    }
    else{
        printf("PARENT!\n");
    }
    return 0;
}