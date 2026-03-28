#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[555],on=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
		{
			if(on==1)
			{
				cout<<",";
			}
			cout<<a[i];
			on=1;
		}
	}
	return 0;
}
