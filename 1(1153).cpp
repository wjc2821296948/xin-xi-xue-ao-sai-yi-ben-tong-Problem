#include<bits/stdc++.h>
using namespace std;
bool ss(int x)
{
	int a,s=0;a=sqrt(x);
	for(int i=2;i<=a;i++)
	{
		if(x%i==0)s++;
	}
	if(s>0)return false;
	else return true;
}
int main(){
	
	int a,b;
	
	for(int i=10;i<=99;i++)
	{
		a=i/10;
		b=i%10;
		if(ss(i)&&ss(b*10+a))	cout<<i<<endl;
	}
    return 0;
}
