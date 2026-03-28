#include<bits/stdc++.h>
using namespace std;
int abc(int n){
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		return abc(n - 1) + abc(n - 2);
	}
}
int main(){
	int n;
	cin >> n;
	cout << abc(n);
	return 0;
}

