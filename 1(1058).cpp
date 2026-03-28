#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()									//小数不能比大小，需要一个精度  常用0.000001 
{
	double a , b , c , d , x1 , x2;			//定义系数 
	scanf("%lf%lf%lf",&a,&b,&c);			//输入三个系数 
	d = b * b - 4 * a * c;					//求出△ 
	if ( d < -0.000001 )	printf( "No answer!" );			//  △小于0 输出No answer!
	else if ( d >= -0.000001 && d <= 0.000001 )				//  △等于0 输出两个相同的解 
		printf("x1=x2=%.5lf\n",( -b )/ ( 2 * a ));
	else													//  △大于0 输出两个不同的解 
	{
		if ( a > 0 )										//  判断x1，x2大小 输出小的在前，大的在后 
		printf("x1=%.5lf;x2=%.5lf\n", ( -b - sqrt( d ) )/ ( 2 * a ),( -b + sqrt( d ) )/ ( 2 * a ) );
		else
		printf("x1=%.5lf;x2=%.5lf\n",( -b + sqrt( d ) )/ ( 2 * a ), ( -b - sqrt( d ) )/ ( 2 * a ) );
	}
	return 0;
}
