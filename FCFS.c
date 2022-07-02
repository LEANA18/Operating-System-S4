//Program to implement First Come First Serve (FCFS) scheduling

#include<stdio.h>
int main()
{
    int n,i,j,avwt=0,avtat=0;
    int bt[20],wt[20],tat[20];
    printf("Enter no of processes");
    scanf("%d",&n);
    printf("\nEnter Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }

    }
    printf("Process\t\tBurst Time\t\tWaiting Time\t\t\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t\t%d",i+1,bt[i],wt[i],tat[i]);
        
    }
    avwt=avwt/i;
    avtat=avtat/i;
    printf("\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d",avtat);
    return 0;
}

