#include<bits/stdc++.h>
using namespace std;
int b(int n){
	if(n==1||n==2) return 1;
	return b(n-1)+b(n-2);	
}
int main()
{
	int n;
	int a[200];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		printf("%d\n",b(a[i]));
	}
    return 0;
}
