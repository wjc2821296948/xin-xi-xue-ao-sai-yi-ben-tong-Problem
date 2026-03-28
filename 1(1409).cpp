#include<bits/stdc++.h>
using namespace std;
int x,y,sum;
bool check(int n){
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	cin>>x>>y;
	if(x<2){
		for(int i=2;i<=y;i++){
			if(check(i)){
				sum++;
			}
		}
	}
	else{
		for(int i=x;i<=y;i++){
			if(check(i)){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
