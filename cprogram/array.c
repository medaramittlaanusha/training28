#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",*(arr+1));
	}
	return 0;
	
}

