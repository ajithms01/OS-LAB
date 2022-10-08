#include <stdio.h>
int main()
{
	int p,b,psize[10],bsize[10],flag[10],i,j,allocation[10];
	printf("Enter the number of blocks:");
	scanf("%d",&b);
	printf("Enter the size of each block:\n");
	for(i=0;i<b;i++)
	{
		scanf("%d",&bsize[i]);
	}
	
	printf("Enter the number of processes:");
	scanf("%d",&p);
	printf("Enter the size of each process:\n");
	for(i=0;i<p;i++)
	{
		scanf("%d",&psize[i]);
	}
	
	for(i=0;i<10;i++)
	{
		flag[i]=0;
		allocation[i]=-1;
	}
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<b;j++)
		{
			if(flag[j]==0 && bsize[j]>=psize[i])
			{
				flag[j]=1;
				allocation[j]=i;
				break;
			}
		}
	}
	
	printf("block\tsize\tprocess\tpsize\n");
	for(i=0;i<b;i++)
	{
		printf("%d\t%d\t",i,bsize[i]);
		if(flag[i]!=0)
		{
			printf("%d\t%d",allocation[i],psize[allocation[i]]);
		}
		else
			printf("Not allocated");
		printf("\n");
	}
}
	
	
