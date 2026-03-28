#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n,i,y,x=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&y);
	if(y%70==0)
	{
	x+=y/70;}
	else
	{
	x+=y/70+1;}
	}
	printf("%.1f",x/10.0);
return 0;
}
