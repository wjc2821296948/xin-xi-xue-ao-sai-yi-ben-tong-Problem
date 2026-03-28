#include <bits/stdc++.h>
using namespace std;
int f(int x,int sum){
	if(x== 0){
		return sum;
	}else{
		sum += (x % 10) *(x % 10) *(x % 10);
		return f(x/10,sum);
	}
}
int main() {
	
	for (int i = 100;i <= 999;i++){
		int sum = 0;
		if(f(i,sum) == i){
			printf("%d\n",i);
		}
	}
	return 0;
}
