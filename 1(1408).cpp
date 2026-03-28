#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}
bool isPal(int n){
	int m = 0; 																										
	for(int a = n; a > 0; a /= 10)
		m = m * 10 + a % 10;
	return m == n; 
}
int main(){
    int n, s = 0;
    cin >> n;
    for(int i = 11; i <= n; i++)
        if(isPrime(i) && isPal(i))
            s++;
    cout << s;
    return 0;
}
