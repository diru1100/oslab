#include<stdio.h>
int main()
{
  int n,at[10],bt[10],ct[10],tat[10],wt[10],pno[10];
  int temp,temp1,temp2;
  float sumtat,sumwt;
 printf("ENTER NO.OF PROCESSS\n");
 scanf("%d",&n);

printf("ENTER PROCESS NO , ARRIVAL TIME, BURST TIME FOR ALL     PROCESS :\n");
printf("PNO\tAT\tBT\t\n");  
 for (int i=0;i<n;i++)
{
  scanf("%d\t%d\t%d",&pno[i],&at[i],&bt[i]);
}
 for (int i=0;i<n;i++)
{
  for (int j=i+1;j<n;j++)
  {  if(at[i]>at[j])
      {
 	 temp=at[i];
	 at[i]=at[j];
	 at[j]=temp;
 	   temp1=pno[i];
	   pno[i]=pno[j];
	   pno[j]=temp1;
	 temp2=bt[i];
	 bt[i]=bt[j];
	 bt[j]=temp2;
      }
   }
}
for(int i=0;i<n;i++)
{
    if(i==0)
   {
     ct[i]=bt[i]+at[i];
   }
   else
   {
	ct[i]=bt[i]+ct[i-1];	
   }
}

for(int i=0;i<n;i++)
{
   tat[i]=ct[i]-at[i];
}
for(int i=0;i<n;i++)
{
  wt[i]=tat[i]-bt[i];
}
for(int i=0;i<n;i++)
{
  sumtat=tat[i]+sumtat;
  sumwt=wt[i]+sumwt;
}
printf("\n FIRST COME FIRST SERVE CPU SCHEDULING \n");
printf("PID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
for(int i=0 ;i<n;i++)
{
 printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n",pno[i],at[i],bt[i],ct[i],tat[i],wt[i],wt[i]);
}
printf("AVERAGE TURN AROUND TIME  %f\n",(sumtat/n));
printf("AVERAGE WAITING TIME      %f \n",(sumwt/n));

 return 0;
}
