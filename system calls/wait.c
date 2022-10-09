#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
	int pid,status,exitch;
	
	if((pid=fork())==-1){
		perror("error\n");
		exit(0);
	}
	else if(pid==0){
		sleep(2);
		printf("Child process\n");
		exit(0);
	}
	else{
		printf("Parent process");
		if((exitch=wait(&status))==-1){
			perror("During wait\n");
			exit(0);
		}
		printf("\nParent process existing");
	}
}
