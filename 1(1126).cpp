#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a[101][101],n1,m;
	scanf("%d %d",&n1,&m);
	for (int i = 1;i <= n1;i++){
		for (int j = 1;j <= m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = m;i >= 1 ;i++){
		for (int j = n1;j >= 1;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
} 
