#include <bits/stdc++.h>
using namespace std;
int e(int n,int sum){
	for(int i = 1;i <= n - 1;i++){
		if (n%i == 0){
			sum = sum + i;
		}
	}
}
int main(){
	int n,sum = 0;
	scanf("%d",&n);
	for (int i = 2;i <= n;i++){
		if (e(n,sum) == i){
			cout << i << endl;
		}
	}
	return 0;
} 
