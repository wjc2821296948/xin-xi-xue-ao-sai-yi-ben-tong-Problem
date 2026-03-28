#include<cstdio>
#include<iostream>
using namespace std;
int n,b[101];
string a[101];
void sort(int x[])
{
	for(int i=n;i>1;i--)
	{
		for(int j=1;j<i;j++)
		{
			if(x[j]<60&&x[j+1]>=60)
			{
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}
			if(x[j]>=60&&x[j+1]>=60&&x[j]<x[j+1])
			{
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	sort(b);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

