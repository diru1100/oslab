#include <bits/stdc++.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
using namespace std;
int* N = (int*)1000;
int main(void){
    int fd[2],nbytes;
    pid_t childpid;
    char str[] = "This is kool\n";
    char readerbuffer[80];
    
    pipe(fd); //creates a pipe
    
    if((childpid=fork())==-1){
        perror("fork");
        exit(1);
    }
    if(childpid==0){
        nbytes = read(fd[0],readerbuffer,sizeof(readerbuffer));
        cout << "Child here:" << readerbuffer << endl;
        write(fd[1],readerbuffer,sizeof(readerbuffer));
        exit(0);
    }
    if(childpid>0){
        write(fd[1],str,(strlen(str))+1);
        wait(NULL);
        nbytes = read(fd[0],readerbuffer,sizeof(readerbuffer));
        cout << "this is echoed:" << readerbuffer;
    }
    return 0;
}

