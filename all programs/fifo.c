#include<stdio.h>
int main()
{
int count=0;
int flag=0;
int m=0;
int i=0;
int n=0;
int j=0;
int k=0;
printf("enter the no of process and pages \n");
scanf("%d",&n);
scanf("%d",&m);
int res[m];
int hit=0;
for(i=0;i<m;i++)
{


res[i]=-1;
}
printf("enter the process");
for(i=0;i<n;i++)
{
scanf("%d",&k);
printf("%d",k);
if(count==m)
{
count=0;
}
for(j=0;j<m;j++)
{
if(res[j]==k)
{
break;
}
if(res[j]==-1)
{
res[j]=k;
hit++;
break;
}
}
if(j==m)
{
res[count]=k;
count++;
hit++;
}
printf(" ");
for(j=0;j<m;j++)
{
if(res[j]!=-1)
{
printf("%d",res[j]);
}
else
break;
}
printf("\n");
}
printf("\n no of page faults is %d",hit);

}