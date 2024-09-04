#include<stdio.h>
#include<math.h>
int main()
{
	int n=625;
	int sq=n*n;
	int digits=1;
	int temp=n;
    while(temp>0 )
    {             
		digits=digits*=10;
        temp=temp/10;
    }
      
    int sqlst=sq%digits;
	if(sqlst==n)
		printf("it is automorphic");
	return 0;
}
