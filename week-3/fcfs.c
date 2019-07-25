#include<stdio.h>
void main()
{
	int at[20],i,n,bt[20],ct[20],tat[20],wt[20],awt[20]; float avgtat,avgwt;
	printf("enter no of process");
	scanf("%d",&n);
	printf("enter arrival time\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&at[i]);
	}
	printf("enter burst time\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&bt[i]);
	}
	ct[0]=tat[0]=bt[0];
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		ct[i]=ct[i-1]+bt[i];
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
	}
	printf("at \tbt \ttat \twt \n");
	for(i=0;i<n;i++)
	{
		printf("%3d\t%3d\t%3d\t%3d\t%3d\n",at[i],bt[i],ct[i],tat[i],wt[i]);
	}		
	for(i=0;i<n;i++)
	{
		avgtat=avgtat+tat[i];
		avgwt=avgwt+wt[i];
	}
	printf("avg tat is %f\n",avgtat/n);
	printf("avg wt is %f \n",avgwt/n);
}
