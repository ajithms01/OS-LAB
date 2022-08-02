#include <stdio.h>
int p[50],bt[50],tat[50],wt[50],tottat=0,totwt=0,nop;
float avgtat=0.0,avgwt=0.0;
int main()
{
	int i;
	printf("Enter the number of processes : ");
	scanf("%d",&nop);
	
	for(i=0;i<nop;i++)
	{
		printf("Enter the burst time of P%d : ",i);
		scanf("%d",&bt[i]);
		printf("\n");
		p[i]=i+1;
	}
	
	for(i=0;i<nop;i++)
	{
		if(i==0)
		{
			tat[i]=bt[i];
		}
		else
		{
			tat[i]=tat[i-1]+bt[i];
		}
		wt[i]=tat[i]-bt[i];
		tottat+=tat[i];
		totwt+=wt[i];
	}
	avgtat=(float)tottat/nop;
	avgwt=(float)totwt/nop;
	
	printf("PROCESSES\t BURST\t\t TAT\t\t WT\n");
	for(i=0;i<nop;i++)
	{
		printf("%d\t\t %d\t\t %d\t\t %d\n",p[i],bt[i],tat[i],wt[i]);
	}
	printf("AVERAGE TAT : %f\n",avgtat);
	printf("AVERAGE WT : %f\n",avgwt);
}
