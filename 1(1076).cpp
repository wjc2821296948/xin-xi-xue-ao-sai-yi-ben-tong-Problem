#include <iostream>
using namespace std;
int main()
{
	int n , a , b , i=0,c=0;
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		if(90<=a&&140>=a&&60<=b&&90>=b)
		{
			i++;		//当前这次满足条件++ 
		}
		else 
		{
			i=0;		//不满足归零 重新计数 
		}
		if(c<i)  c=i;	//最大满足次数 
	}
	cout << c;		//输出结果
}

