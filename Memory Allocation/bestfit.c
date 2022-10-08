#include<stdio.h>
#define MAX 20
int main()
{
	int bsize[MAX],fsize[MAX],nb,nf;
	int temp,low=10000;
	 int bflag[MAX],fflag[MAX];
	int i,j;
	printf("Enter the number of blocks\t");
	scanf("%d",&nb);
	for(i=1;i<=nb;i++){
	printf("Enter the size of memory block % d\t",i);
	scanf("%d", &bsize[i]);
	}
	printf("\nEnter the number of files\t");
	scanf("%d",&nf);
	for(i=1;i<=nf;i++){
	printf("Enter the size of file %d\t",i);
	scanf("%d",&fsize[i]);
	}
	for(i=1;i<=nf;i++){
		for(j=1;j<=nb;j++){
			if(bflag[j]!=1){
				temp=bsize[j]-fsize[i];
				if(temp>=0){
					if(low>temp){
					fflag[i]=j;
					low=temp;
					}
					}}}
		bflag[fflag[i]]=1;
		low=10000;
	}
	printf("\n file no \t file.size\t block no \t block size");
	for(i=1;i<=nf;i++)
	printf("\n \n %d \t\t%d\t\t%d\t\t%d",i,fsize[i],fflag[i],bsize[fflag[i]]);
}
