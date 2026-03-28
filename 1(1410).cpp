#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for(int i = 2; i <= sqrt(n); ++i)
		if(n%i == 0)
			return false;
	return true;
}
int maxPrimeFactor(int n){
	for(int i = n; i >= 2; --i)
		if(n%i == 0 && isPrime(i))
			return i;
}
int main(){
    int m, n;
    cin >> m >> n;
    bool isFirst = true; 
    for(int i = m; i <= n; ++i){
    	if(isFirst)
    		isFirst = false;
    	else
    		cout<<',';
    	cout << maxPrimeFactor(i);
	}
	return 0;
}
