#include<stdio.h>
int  main()
{
int bt[10],p[10],wt[10],tat[10],i,j,n,total=0,pos; float avg_wt,avg_tat;
printf("enter no.of processes"); scanf("%d",&n);
printf("enter brust time"); for(i=0;i<n;i++)
{
printf("%d",i+1); scanf("%d",&bt[i]); p[i]=i+1;
}
for(i=0;i<n;i++)
{
pos=1; for(j=i+1;j<n;j++) {
if(bt[j]<bt[pos]) pos=j;
}
int temp;
temp=bt[i];
bt[i]=bt[pos];
bt[pos]=temp;
temp=p[i];
p[i]=p[pos];
p[pos]=temp;
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
wt[i]+=bt[j];
total+=wt[i];
}
avg_wt=(float)total/n;
total=0;
printf("\nprocess\tbursttime\twt\ttat"); for(i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];
total+=tat[i]; printf("\np%d\tt%d\t%d\t%d",p[i],bt[i],wt[i],tat[i]); }
avg_tat=(float)total/n;
printf("\n avd-wt=%f", avg_wt);
printf("\n avg_tat=%f",avg_tat);
return 0;
}
