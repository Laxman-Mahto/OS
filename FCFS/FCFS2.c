#include <stdio.h>

int main()
{
    int n=3;
    int bt[3]={5,3,8};
    int wt[3],tat[3];
    int i,totalwt=0,totaltat=0;

    wt[0]=0;

    for(i=1;i<n;i++)
        wt[i]=wt[i-1]+bt[i-1];

    for(i=0;i<n;i++)
    {
        tat[i]=wt[i]+bt[i];
        totalwt=totalwt+wt[i];
        totaltat=totaltat+tat[i];
    }

    printf("P\tBT\tWT\tTAT\n");

    for(i=0;i<n;i++)
        printf("%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);

    printf("Average Waiting Time = %.2f\n",(float)totalwt/n);
    printf("Average Turnaround Time = %.2f\n",(float)totaltat/n);

    return 0;
}
//11