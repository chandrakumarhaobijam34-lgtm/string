#include<stdio.h>
int main(){
    int n,i,found;
    int arr[]={2,9,3,5,20,6,18,15};
    printf("Enter the number to search",n);
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(arr[i]==n){
        printf("Number %d found at  %d\n",n,i+1);
        found=1;
        break;
        }
    }
  if(!found){
    printf("Number %d is not found",n);
  }
  return 0;
}

