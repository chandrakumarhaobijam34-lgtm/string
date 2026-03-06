#include <stdio.h>
int main(){
    int arr[100],i,j,temp;
    printf("Enter the Elements:");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<5-1;i++)
    {

        for(j=0;j<5-1;j++)
        {
             
              if(arr[j] >arr[j+1])
              {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
              }
            
        }
    }
        printf("sorted Array:");
        for(i=0;i<5;i++)
        printf("%d",arr[i]);
        return 0;
}