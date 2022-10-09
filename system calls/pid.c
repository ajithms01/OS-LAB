#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(){
		printf("PID: %d\n",getpid());
		printf("PPID: %d\n",getppid());
}
