#include <bits/stdc++.h>
int sum[100],n[51];
using namespace std;
int main(){
	int sb,flag = 0,maxn = -99;
	scanf("%d",&sb);
	for (int  i = 0;i < sb - 1;i++){
		scanf("%d",&n[i]);
	}
	for (int  i = 0;i < sb - 1;i++){
		sum[n[i]]++;
	}
	for (int  i = 0;i < sb - 1;i++){
		if (sum[i] > maxn){
			maxn = i;
		}
	}
	if(maxn > sb / 2){
		flag = 1;
		printf("%d",maxn);
	}
	else if (flag == 0){
		printf("no");
	}
} 
