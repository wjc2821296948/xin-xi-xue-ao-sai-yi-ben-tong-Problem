#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ct[105] = {}, n, a;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a;
		ct[a+50]++;
	}
	for(int i = 0; i <= 100; ++i)
	{
		if(ct[i] > n/2)
		{
			cout << i-50;
			return 0;
		}
	}
	cout << "no";
	return 0;
}

