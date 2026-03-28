#include <iostream>	
#include <cstdio>	
using namespace std;
int main(){
	double a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double x,s=0;
	for(int i=0;i<10;i++) 
	{
		cin>>x;
		s+=a[i]*x;
	}
	printf("%.1lf\n",s);
	return 0;
}

