#include<stdio.h>
struct student{
    int id;
    char name[4];
    float age;
    float city;
}student;
int main(){
    struct student s[4];
    int i;
    printf("Enter detial of 4 student");
    for(i=0;1<4;i++){
    printf("id:%d,Name:%s\n",s[i].id,s[i].name,s[i].age,s[i].city);
    scanf("%d")
}

}