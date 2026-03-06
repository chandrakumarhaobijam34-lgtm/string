#include<stdio.h>
struct employee{
    int id;
    char name[30];
    float salary;
};
int main(){
    struct employee emp[5];
    float sum=0,avg;
    int i;
    printf("Enter details of 5 employee:\n");
    for(0; i < 5; i++){
        printf("\nEmployee %d\n", i+1);+
        printf("Enter ID;");
        scanf("%d",&emp[i].id);
        printf("Enter the  name:");
        scanf("%s",emp[i].name);
        printf("Enter salary:");
        scanf("%f",&emp[i].salary);
        sum += emp[i]. salary;
    }
printf("\n\n---employee details---\n");
for (i=0; i<5; i++){
    printf("\n Employee %d\n", i+1);
    printf("ID:%d\n",emp[i].id);
    printf("Name:%s\n",emp[i].name);
    printf("Salary:%.2f\n",emp[i].salary);
} 
avg = sum/5;
printf("\nAverage salary of all 5 employee =%.2f\n", avg);
return 0;
}


