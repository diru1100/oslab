#include<stdio.h>
#include<pthread.h> #define NUM_THREADS 5 void *runner(void *i)
{

static int s=0; s++;
printf("Thread %d is running\n",s);

pthread_exit(0);

}

int main(int argc,char *argv[])

{

int i,scope;

pthread_t id[NUM_THREADS]; pthread_attr_t attr; pthread_attr_init(&attr);
if(pthread_attr_getscope(&attr,&scope)!=0)


fprintf(stderr,"unable to get scheduling scope\n"); else{
if(scope==PTHREAD_SCOPE_PROCESS) printf("PTHREAD_SCOPE_PROCESS");
else if(scope==PTHREAD_SCOPE_SYSTEM) printf("PTHREAD_SCOPE_SYSTEM");
else

fprintf(stderr,"iilegalscope");

}

pthread_attr_setscope(&attr,PTHREAD_SCOPE_SYSTEM); for(i=0;i<NUM_THREADS;i++)
pthread_create(&id[i],&attr,runner,NULL); for(i=0;i<NUM_THREADS;i++)
pthread_join(tid[i],NULL); return 0;
}
