#include <stdio.h>

int main(){
		int n,p[10],bt[10],tat[10],wt[10],i,total_tat=0,total_wt=0;
		float avg_tat=0,avg_wt=0;
		
		printf("Enter no of processes: ");
		scanf("%d",&n);
		
		printf("Enter burst time of each processes: ");
		
		for(i=0;i<n;i++){
			scanf("%d",&bt[i]);
			p[i] = i;
		}
		for(i=0;i<n;i++)
		{
			if(i==0)
				tat[i]=bt[i];
			else
				tat[i]=tat[i-1]+bt[i];
			wt[i]=tat[i]-bt[i];
			total_tat+=tat[i];
			total_wt+=wt[i];
		}
		
		avg_tat=((float)total_tat)/((float)n);
		avg_wt=((float)total_wt)/((float)n);
		
		printf("Process\tBT\tTAT\tWT\n");
		
		for(i=0;i<n;i++){
			printf("%d\t%d\t%d\t%d\n",p[i],bt[i],tat[i],wt[i]);
		}
		
		printf("\nAvg TAT: %f",avg_tat);
		printf("\nAvg WT: %f",avg_wt);
		
}
