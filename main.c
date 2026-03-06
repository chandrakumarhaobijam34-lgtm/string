#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
int sum,average;
printf("Enter any 3 integer:");
scanf("%d%d%d",&a,&b,&c);
sum =a+b+c;
average=sum/3;
printf("The sum and average of 3 integer % d% d",sum,average);
return 0;
}
