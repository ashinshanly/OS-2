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
        printf("Child process!!");
        x++;
        printf("%d\n", x);
    }
    else{
        printf("Parent process!!");
        x--;
        printf("%d\n", x);
    }
    printf("The value of x is =%d\n", x);
    return 0;
}