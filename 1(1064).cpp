#include <iostream>
#include <cstdio>
using namespace std;
int main (){
	int n;
	int a[17];
	int b[17];
	int c[17];
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	scanf("%d",&n);
	for (int i = 0;i <= n - 1;i++){
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		scanf("%d",&c[i]);
	}
	for (int i = 0;i <= n - 1;i++){
		x1 = x1 + a[i];
		x2 = x2 + b[i];
		x3 = x3 + c[i];
	}
	printf("%d %d %d %d",x1,x2,x3,x1 + x2 + x3);
}
