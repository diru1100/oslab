#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>



int main()
{
	
	int pid = fork();

	
	if (pid > 0){
		sleep(10);
		printf("parent\n");
		printf("pid of parent %d\n",getpid());
		printf("child %d\n",pid);
		

	}

		else
	{
		printf("child\n");
		printf("parent %d\n",getppid());
		printf("child %d\n",getpid());
		exit(0);
	}
	
	return 0;
}
