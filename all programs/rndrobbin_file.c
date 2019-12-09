#include<stdio.h>
int main()
{
	int count,j,n,time,remain,flag=0,time_quantum;

	int wait_time=0,turnaround_time=0,at[10], bt[10],rt[10]; 
	FILE *fp=fopen("file5.txt","r");
	Printf(“enter the process,arrival time and burst time”);
	Number%d:",count+1);
	fscanf(fp,"%d",&at[count]);
	fscanf(fp,"%d",&bt[count]);
	rt[count]=bt[count];
}
fprintf("Enter Time Quantum:\t"); fscanf(fp,"%d",&time_quantum); fclose(fp);

FILE *fp1=fopen("file6.txt","w"); fprintf(fp1,"\n\nProcess\t|Turnaround Time|Waiting Time\n\ n");
for(time=0,count=0;remain!=0;)
{
if(rt[count]<=time_quantum && rt[count]>0)
{
time+=rt[count];
rt[count]=0;
flag=1;
}
else if(rt[count]>0)
{
rt[count]-=time_quantum;
time+=time_quantum;
}
if(rt[count]==0 && flag==1)
{

remain--;

fprintf(fp1,"P[%d]\t|\t%d\t|\t%d\n",count+1,time-
at[count],time-at[count]-bt[count]);
wait_time+=time-at[count]-bt[count];turnaround_time+=time-
at[count];
}flag=0;
if(count== n-1)
count=0;
else if(at[count+1]<=time)
elsecount++;
count=0;
}
fprintf(fp1,"\nAverage Waiting Time=
%f\n",wait_time*1.0/n);
fprintf(fp1,"Avg
TurnaroundTime=%f",turnaround_time*1.0/n);
return 0;

}
