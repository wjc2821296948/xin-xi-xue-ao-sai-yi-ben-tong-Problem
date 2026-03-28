#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int a[105][105],n;
	scanf("%d",&n);
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			if(i == j){
				a[i][j] = a[i][j] + 10;
			}else if(i+j == n-1){
				a[i][j] = a[i][j] + 10;
			}
		}
	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
} 
