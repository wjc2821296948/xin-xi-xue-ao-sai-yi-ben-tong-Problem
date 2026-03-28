#include <bits/stdc++.h>
using namespace std;
char a[1000];
int b[1000],n,m,t;
int fun(int k){
	if (k ==0){
		return 1;
	}
	else if (k % 2 ==1){
		return fun(k - 1)*2011%10000;
	}
	else{
		int m=fun(k/2)%10000;
		return m*m%10000; 
	}
} 
int main(){
	cin >> t;
	while(t--){
		cin >> a;
		n = strlen(a);
		m = a[n-1]-'0';
		if (n >= 2){
			m += (a[n - 2]-'0')*10;
		}
		if (n >= 3){
			m += (a[n - 3]-'0')*100;
		}
		if (n >= 4){
			m += (a[n - 4]-'0')*1000 ;
		}
		cout << fun(m) << endl;
	}
	return 0;
}

