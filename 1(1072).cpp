#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, t, e;//t：病例总数 e：疗效有效病例数
	cin>>n;
	cin>>t>>e;
	double x = (double)e / t, y;//x:鸡尾酒疗法治愈率 y:其它疗法治愈率
	for(int i = 1; i < n; ++i)//输入n-1组数据
	{
		cin>>t>>e;//输入某疗法的病例总数及疗效有效病例数
		y = (double)e / t;
		if(y - x > 0.05)
			cout<<"better"<<endl;
		else if(x - y > 0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}

