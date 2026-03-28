#include<bits/stdc++.h>
using namespace std;
int read()
{
	int ans=0;bool f=0;char ch=getchar();
	while(ch<'0' or ch>'9'){if(ch=='-')f=1;ch=getchar();};
	while(ch>='0' and ch<='9'){ans=(ans<<1)+(ans<<3)+(ch^48);ch=getchar();};
	return f?~ans+1:ans;
}
int a,b,x,y;
float z;
int main()
{
	x=read(),a=read(),y=read(),b=read();
	z=(y*b-x*a)/(b-a);
	printf("%.2f",z);
	return 0;
}
