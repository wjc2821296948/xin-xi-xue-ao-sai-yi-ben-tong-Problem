#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	int ch,ra;
	ra=(y-2*x)/(2);
	ch=x-ra;
	cout<<ch<<" "<<ra;
    return 0;
}

