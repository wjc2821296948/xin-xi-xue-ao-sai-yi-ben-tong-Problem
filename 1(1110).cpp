#include <bits/stdc++.h>
using namespace std;
int f(int n,int a[],int x){
	int t = 0;
	for(int i = 1;i <=n;i++){
		if(a[i] == x){
			t = i;	
		}
	}
	if(t == 0){
		t = -1;
	}
	return t;
}
int main(){
	int n = 0;
	cin >>n;
	int a[101] = {0};
	for(int i = 1; i <= n;i++){
		cin >> a[i];
	}
	int x = 0;
	cin >>x;
	cout << f(n,a,x);
}

