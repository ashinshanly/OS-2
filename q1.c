#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x =5;
    int a = fork();
    if(a<0){
        printf("Error!");
        exit(1);
    }
    else if(a==0){
        printf("Child process!!\n");
        x++;
    }
    else{
        printf("Parent process!!\n");
        x--;
    }
    printf("The final value of x is =%d\n", x);
    return 0;
}