#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ 
	double x1,x2,x3,y1,y2,y3,a,b,c,area,p;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
    	a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//计算边长a
	b=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));//计算边长b
	c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));//计算边长c
	p=(a+b+c)/2.0;//计算半周长
	area=sqrt(p*(p-a)*(p-b)*(p-c));//海伦公式求面积
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<area<<endl;  
	return 0;
}
