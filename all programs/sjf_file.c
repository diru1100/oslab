#include<stdio.h>
void main()
{
int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp; float avg_wt,avg_tat;

FILE *fp=fopen("file3.txt","r"); //printf("Enter number of process:"); fscanf(fp,"%d",&n);

//printf("\nEnter Burst Time:\n"); for(i=0;i<n;i++)
{
fscanf(fp,"%d",&bt[i]);
p[i]=i+1;
}
for(i=0;i<n;i++)
{
pos=i;
for(j=i+1;j< n;j++)
{
if(bt[j]<bt[pos])
pos=j;
}
temp=bt[i];
bt[i]=bt[pos];
bt[pos]=temp; temp=p[i];
p[i]=p[pos];
p[pos]=temp;
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j< i;j++)
wt[i]+=bt[j];
total+=wt[i];
}

fclose(fp);
avg_wt=(float) total/n; total=0;

FILE *fp1=fopen("file4.txt","w"); fprintf(fp1,"\nProcess\tBurstTime\tWaiting Time\ tTurnaround Time");
for(i=0;i<n;i++)
{
tat[i]=bt[i
]+wt[i]; total+=tat[ i]; fprintf(fp1,"\np%d\t\t%d\t\t%d\t\t\t %d",p[i],bt[i],wt[i],tat[i]);
}
avg_tat=(float)total/n;
fprintf(fp1,"\n\nAverageWaiting	Time=%f",avg_wt);
fprintf(fp1,"\nAverageTurnaround Time=%f\n",avg_tat);

}
