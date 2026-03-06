#include<stdio.h>
struct process{
    int pid;
    int burst;
    int priority;

};
int main(){
    int n,i,j;
    printf("Enter number of processes:");
    scanf("%d",&n);
    struct process p[n];
    for(i=0;i<n-1;i++){
        p[i].pid=i+1;
        printf("Process %d priority(lower value= Higher priority)):",i+1);
        scanf("%d",&p[i].priority);
    }
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++);
        if(p[j].priority<p[min].priority)
        min=j;
        if(min !=i){
            struct process temp=p[i];
            p[i]=p[min];
            p[min]=temp;

        }
    }
    int time=0;
    printf("\nschedule order:|\n");
    printf("PID\tBrust\tPriority\tCompletion Time\n");
    for(i=0;i<n;i++){
        time+=p[i].burst;
        printf("p%d\t%d\t%d\t%d\n",p[i].pid,p[i].burst,p[i].priority,time);
        
 }
 return 0;
}