#include<bits/stdc++.h>
using namespace std;
double k(int x,int y,int z){
	if(x<y){
		x=y;
	}
	if(x<z){
		x=z;
	}
	return x;
}
int main(){
	double a,b,c,sum;
	cin >> a >> b >> c;
	sum = k(a,b,c)/(k(a+b,b,c)*k(a,b,b+c))*1.0;
	printf("%.3lf",sum);
	return 0;
}
