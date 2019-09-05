#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/types.h>
using namespace std;
int main(void){
    int fd[2],nbytes;
    pid_t childpid;
    char str[] = "Hello, world!\n";
    char readerbuffer[80];
    
    pipe(fd); 
    
    if((childpid=fork())==-1){
        perror("fork");
        exit(1);
    }
    
    if(childpid==0){
        close(fd[0]);
        
        write(fd[1],str,(strlen(str))+1);
        exit(0);
    }
    else{
        close(fd[1]);
        
        nbytes = read(fd[0],readerbuffer,sizeof(readerbuffer));
        cout << "Received String:" << readerbuffer ;
    }
    return 0;
}

