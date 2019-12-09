#include<stdio.h>
#include<pthread.h> #include<stdlib.h> void *funct(void *msg)
{

char *data; data=(char *)msg; int i; for(i=0;i<5;i++)
{

printf("%s %d\n",data,i); sleep(1);
}

}


int main()

{

char *c1,*c2; c1="Hello"; c2="Thread"; pthread_t tid1,tid2;
pthread_create(&tid1,NULL,&funct,(void *)c1); pthread_create(&tid2,NULL,&funct,(void *)c2); pthread_join(tid1,NULL); pthread_join(tid2,NULL);
return 0;

}
