#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,temp;
	scanf("%d",&n);
	int sum=0,count=0;
	temp=n;
	while(temp!=0)
    {
    	temp=temp/10;
        count++;
    }
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+pow(r,count);
		temp=temp/10;
	}
	if(sum==temp)
		printf("Armstrong number");
	else
		printf("not");

}
		
