#include <stdio.h>
#include <math.h>
int num(int n)
{
	int i,sum=1;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			sum+=i;
			sum+=n/i;
		}
	}
	return sum;
}
int main()
{
	int i,b;
	for(i=1;;i++)
	{
		b=num(i);
		if(i!=b && num(b)==i)
		{
			printf("%d %d\n",i,b);
			break;
		}
	}
	return 0;
}
