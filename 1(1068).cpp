#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	int x = 0;
	int a[101];
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		if(a[i]==m){
			x++;
		}
	}
	cout<<x<<endl;
}
