#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	char path[10];
	struct stat* nfile;
	nfile=(struct stat*)malloc(sizeof(struct stat));
	printf("Enter file name:");
	scanf("%s",path);
	stat(path,nfile);
	printf("user id : %d\n",nfile->st_uid);
	printf("group id : %d\n",nfile->st_gid);
	printf("size: %ld\n",nfile->st_size);
	printf("block size : %ld\n",nfile->st_blksize);
	printf("no. of links : %ld\n",nfile->st_nlink);
	printf("Last access time: %ld\n",nfile->st_atime);
	printf(" mode : %d",nfile->st_mode);
}


