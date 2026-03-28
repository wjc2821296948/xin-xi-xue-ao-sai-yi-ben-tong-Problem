#include<bits/stdc++.h>
using namespace	std;
#define M 1000000 //设置常量，下面M就是1000000
int	main()
{
	int n, num = 1, sum = 0;//num：阶乘%M sum：阶乘和%M 
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		num = num * i % M;
		sum = (sum + num) % M;
	}
	cout << sum;
	return 0;
}

