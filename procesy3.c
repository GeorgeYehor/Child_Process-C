#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void exit_func()
    {
        printf ("PID Vi/Vim: %d\n", getpid());
    }
	   
int main (int argc, char *argv[]) {
    
    atexit(exit_func); 
    
    
    char path_to_vi[150] = "/usr/bin/vi";  // Path to vi in Linux(Ubuntu)
    pid_t pid_potomka;
    pid_potomka = fork();
	
	pid_t mojpid;
	pid_t mojppid;
	mojpid=getpid();
	mojppid=getppid();
	
	if(argc < 2)
	{
		// Do nothing
	}
	else
	{	
		strcat(path_to_vi, " ");
		strcat(path_to_vi, argv[1]);	
	}
	system(path_to_vi);	

    if(pid_potomka == 0) {
        printf("PID potomka: %d\n", mojpid);
    } else {
        printf("PID rodzica: %d\n", mojpid);
		printf("PID potomka po rodzicu: %d\n", pid_potomka);
    }
    
exit(EXIT_SUCCESS);	
}

