#include <bits/stdc++.h>
using namespace std;
#define N 110
int a[N][N];
int sums[N][N];
int main(){
	int i,j,k,l,n,t,max;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
			sums[i][j]=sums[i-1][j]+sums[i][j-1]-sums[i-1][j-1]+a[i][j];
		}
	}
	max=sums[1][1];
	for(i = 1;i <= n;i++){
		for (j=1;j<=n;j++){
			for(k=1;k<=i;k++){
				for(l=1;l<=j;l++){
					t=sums[i][j]-sums[i][l-1]-sums[k-1][j]+sums[k-1][l-1];
					if(t>max)
						max=t;
				}
			}
		}
	}
	printf("%d\n",max);
	return 0;
}
