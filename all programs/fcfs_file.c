#include<stdio.h>
#include<math.h>
int main()
{
int
n,at[20]={0},bt[20]={0},wt[20]={0},tat[20]={0},ct[20]={0},
awt=0,i,j,temp,sum=0,temp1;
FILE *fp=fopen("file1.txt", "r"); //printf("Enter total number of processes"); fscanf(fp,"%d",&n);

//printf("\nEnter Process arrival Time\n"); for(i=0;i<n;i++)
{

//printf("%d process\t",i+1); fscanf(fp,"%d",&at[i]);
}

//printf("\nEnter Process Burst Time\n"); for(i=0;i<n;i++)
{
//printf("%d process\t",i+1);
}fscanf(fp,"%d",&bt[i]);
fclose(fp);
for(i=0;i<n-1;i++){
for(j=1;j<n-i-1;j++){

if(at[i]>at[j]){


temp=at[i]; at[i]=at[j]; at[j]=temp; temp1=bt[i]; bt[i]=bt[j];
bt[j]=temp1;
}
}
}
for(i=0;i<n;i++){
sum+=bt[i];
ct[i]+=sum;
}
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=abs(tat[i]-bt[i]);
}

for(i=0;i<n;i++){ awt+=wt[i];
}
awt/=i;
FILE *fp1=fopen("file2.txt", "w");

fprintf(fp1,"A\tB\tC\tt\tw\n");
for(i=0;i<n;i++){
fprintf(fp1,"%d\t%d\t%d\t%d\t
%d",at[i],bt[i],ct[i],tat[i],wt[i]);

fprintf(fp1,"\n");
}

fprintf(fp1,"average wait time %d",awt); fclose(fp1);

return 0;}
