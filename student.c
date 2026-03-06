#include<stdio.h>
struct students{
    int id;
    char name[4];
    float mark;
}student;
int main(){
    
     struct students s[4];
     int i,maxindex=0;
     printf("Enter detials of 4 student:\n");
     for(i=0; i<4; i++){
        printf("\nstudent %d\n",i+1);
        printf("Enter the id:");
scanf("%d" ,&s[i].id);
        printf("Enter the name :");
        scanf("%d");
     }
    
}
