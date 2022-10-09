#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fid;
	fid=creat("file.dat",S_IREAD/S_IWRITE);
	if(fid==-1)
	{
		printf("file not found\n");
	}
	else
	printf ("file read completed\n Empty");
	return 0;
}
