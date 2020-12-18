#include<stdio.h>
#include<stdlib.h>
void main()
{
	int que[10],n,head,i,j,k,diff,seek=0;
	float avg;
	printf("FCFS Sheduling Algorithm");
	printf("Enter the size of the queue");
	scanf("%d",&n);
	printf("\nEnter the queue");
	for(i=1;i<=n;i++)
	scanf("%d",&que[i]);
	printf("Enter the initial head position");
	scanf("%d",&head);
	que[0]=head;
	printf("\n");
	for(j=0;j<=n-1;j++)
	{
	diff=abs(que[j+1]-que[j]);
	seek+=diff;
	printf("Move from %d to %dwith seek %d\n",que[j],que[j+1],diff);
	}
	printf("\ntotal seek time is %d \t",seek);
	avg=seek/(float)n;
	printf("\n Average seek time is %f\t",avg);
}
