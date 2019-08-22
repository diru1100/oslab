#include<stdio.h>
#include<string.h>
#include <pthread.h>
void *myfunc (void *n); 
int main(int argc, char *argv[])
{ 
pthread_t thread1,thread2; 
char *my1="first thread"; 
char *my2="second thread"; 
int ret1,ret2; 
ret1=pthread_create(&thread1,NULL,&myfunc,&argv[1]); 
//ret2=pthread_create(&thread2,NULL,&myfunc,(void*)my2); 
//printf("main function after pthread\n"); 
//pthread_join(thread1,NULL); 
//pthread_join(thread2,NULL); 
//printf("first thread ret1=%d\n",ret1); 
//printf("second thread ret1=%d\n",ret2); 

return 0;
}
void *myfunc (void *n) 
{ 
int factorial=1;
        for(int i=1; i<=*(int *)n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial is = %d", factorial);
return NULL; 
} 

//https://www.geeksforgeeks.org/void-pointer-c-cpp/
//https://w3.cs.jmu.edu/kirkpams/OpenCSF/Books/cs361/html/POSIXArgs.html
//http://crasseux.com/books/ctutorial/argc-and-argv.html
