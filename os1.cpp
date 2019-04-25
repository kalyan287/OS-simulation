//Question - 1 Kalyan Sai B60
#include<stdio.h>
int main()
{
int i,m;
printf("\nEnter number of processes: ");
scanf("%d",&m); int at[m]; int bt[m],bt1[m]; int wt[m]; int tarrival[m]; int tq1=3; int tq2=6; int avgT=0; int avgW=0;
printf("\nEnter arival time of processes:\n");
for(i=0;i<m;i++)

 printf("For processes %d :",i+1); scanf("%d",&at[i]);
}
printf("\nEnter burst time for processes:\n");
for(i=0;i<m;i++)
{ 
 printf("For processes %d:",i+1); scanf("%d",&bt[i]);
 bt1[i]=bt[i];
}
printf("\n                              1st ITERATION (INTERUPTION = 3)                                \n"); 
for(i=0;i<m;i++)
{  
if(at[i]<=tq1+at[i-1])
{
bt[i]=bt[i]-tq1;
printf("\nFor process %d\n",i+1);
printf("Left Burst time=%d\n",bt[i]);}
else
{
bt[i]=bt[i]-tq1;
printf("For process %d\n",i+1);
printf("Left Burst time= %d\n",bt[i]);
}
}
printf("\n                              2nd ITERATION (INTERUPTION = 6)                                \n");
for(i=0;i<m;i++)
{
if(at[i]<=tq2+at[i-1])
{
bt[i]=bt[i]-tq2;
printf("\nFor process %d\n",i+1); printf("Left Burst time= %d\n",bt[i]);
} 
else 
{
bt[i]=bt[i]-tq2;
printf("For process %d\n",i+1);
printf("Left Burst time= %d\n",bt[i]);
}
}
printf("\n                             3rd ITERATION (COMPELETION OF PROCESS)                                                       \n");
int j,temp;
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(bt[i]>bt[j])
{
temp=bt[i]; bt[i]=bt[j]; bt[j]=temp;
}
}
}
int ct[4]={54,68,45,41};
for(i=0;i<m;i++)
{
tarrival[i]=ct[i]-at[i]; wt[i]=tarrival[i]-bt1[i];
printf("\nCompletion time for process %d : %d \n",i+1,ct[i]);
printf("Turn arround time for process %d : %d \n",i+1,tarrival[i]);
printf("Waiting time for process %d : %d \n",i+1,wt[i]);
avgT=avgT+tarrival[i]; avgW=avgW+wt[i];
}
avgT=avgT/m;
avgW=avgW/m;
printf("\n\nAverage turn around time: %d\n",avgT); printf("Average waiting time: %d\n",avgW);
}
