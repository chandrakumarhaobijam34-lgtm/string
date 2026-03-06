#include<stdio.h>
#include<string.h>
int main(){
    char username[20], password[20];
    printf("username:");
    scanf("%s",username);
    printf("password:");
    scanf("%s",password);
    if (strcmp(password,"Admin123")==0&& strlen(password)>=8)
    printf("Success!Welcome,%s.\n",username);
    else
    printf("invalid password.\n");
    return 0;
}


