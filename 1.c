#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("data.txt","w");
    if(fp==NULL){
        printf("file cannot be opened!\n");
        return 1;

     }
    fprintf(fp,"Welcome to file handling in c\n");
    fprintf(fp,"This text is written to the file.\n");
    fclose(fp);
    return 0;
}