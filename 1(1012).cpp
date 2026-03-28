#include <cstdio>
using namespace std;
int main ()
{
	double x,a,b,c,d,f;
	scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
	f=a*x*x*x+b*x*x+c*x+d;
	printf("%0.7lf",f);
	return 0;
 } 

