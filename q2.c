#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fp;
    fp=fopen("sample.txt", "w");
    char chi[] = "Child process!!\n";
    char par[] = "Parent process!!\n";
    int a = fork();
    if(a<0){
        printf("Error!");
        exit(1);
    }
    else if(a==0){
        fwrite(chi, 1, sizeof(chi), fp);
    }
    else{
        fwrite(par, 1, sizeof(par), fp);
    }
    fclose(fp);

    return 0;
}