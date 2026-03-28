#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}
bool isHuiwen(int n)
{
	return n%10 == n/100;
}
int main()9
{
	for(int i = 100;i <= 999; ++i)
	{
		if(isPrime(i) && isHuiwen(i))
			cout << i << endl;
	}
	return 0;
}

