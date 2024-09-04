#include<stdio.h>
int main()
{
	int i,n,sum=0,avg;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		avg=sum/2;
	
	}
	printf("Sum: %d  average: %d ",sum,avg);
}

