#include<iostream>
using namespace std;
int main()
{ 
	int a[105];
	int n=0,x;
	while(cin>>x)
	{
		a[n]=x;
		n++;
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

