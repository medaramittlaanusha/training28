#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max;
	max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("maximum number: %d",max);
	return 0;
}	

