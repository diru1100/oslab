#include<stdio.h>
#include<pthread.h> #include<stdlib.h> int sum;
int fact; char *c1; int sqr;
void *runner(void *param)

{

int i=0,z;

printf("Thread1 Execution started\n"); z=atoi(param);


sum=0; for(i=0;i<=z;i++)
{

sum=sum+i;

}

pthread_exit(0);

}

void *runner1(void *param)

{

int i=0,l; l=atoi(param);
printf("Thread2 Execution started\n"); fact=1;
for(i=1;i<=l;i++)

{

fact=fact*i;

}

pthread_exit(0);

}

void *runner2(void *param)

{

int z; z=atoi(param);
printf("Thread 3 Execution started\n"); if(z%2==0)
{




}

else
printf("%d is even\n",z);




printf("%d is odd\n",z);



pthread_exit(0);

}

void *runner3(void *param)

{

int k;

printf("Thread 4 execution started\n"); k=atoi(param);
sqr=k*k;

printf("%d is square of %d\n",sqr,k); pthread_exit(0);
}

int main(int argc,char *argv[])

{

pthread_t tid; pthread_attr_t attr; pthread_attr_init(&attr);
pthread_create(&tid,&attr,runner,argv[1]); pthread_join(tid,NULL); printf("sum=%d\n ",sum);
pthread_t tid2; pthread_attr_t attr1; pthread_attr_init(&attr1);


pthread_create(&tid2,&attr1,runner1,argv[1]); pthread_join(tid2,NULL); printf("fact=%d\n",fact);
pthread_t tid3; pthread_create(&tid3,NULL,runner2,argv[1]);
//		printf("%d is %s\n",argv[1],c1); pthread_join(tid3,NULL); pthread_t tid4;
pthread_create(&tid4,NULL,runner3,argv[1]);

//		printf("%d is square of %d\n",sqr,argv[1]); pthread_join(tid4,NULL);
return 0;

}
