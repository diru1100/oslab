#include<pthread.h> #include<stdio.h> #include<stdlib.h> int g=0;
void *func(void *parm

{ int th; th=(int*)parm; static int s=0;
++s;

++g;

printf("Thread No: %d, Static value: %d Global value: %d\n", th,++s,++g);

}

int main(int argc, char *argv[]) { pthread_t tid; //thread identifier int i;
for(i=0;i<5;++i)

pthread_create(&tid, NULL, func, (void*)i); printf("\nin main g value=%d\n",g); pthread_exit(NULL);


return 0;

}