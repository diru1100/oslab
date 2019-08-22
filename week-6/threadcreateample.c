#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
int sum;
//this data is shared by the threads
void *runner(void *param);
int main(int argc, char *argv[])
{
      pthread_t tid;
      //thread identifier
      pthread_attr_t attr;
      //set of thread attributes
      pthread_attr_init(&attr);
      //set the default attributes of the thread
      printf("\nSum value before thread execution: %d\n",sum);
      pthread_create(&tid, &attr, runner, argv[1]);
      pthread_join(tid, NULL);
      //suspends the parent until the thread is terminated
      printf("Sum=%d:\n\n",sum);
      return 0;
}
void *runner(void *parm)
//thread will execute in this function to compute the sum
{
      int i,upper;
      printf("Thread execution started....\n");
      upper=atoi(parm);
      sum=0;
      for(i=1;i<=upper; ++i)
      sum+=i;
      //sum computation which will update the global variable ‘sum’
      pthread_exit(0);
}
