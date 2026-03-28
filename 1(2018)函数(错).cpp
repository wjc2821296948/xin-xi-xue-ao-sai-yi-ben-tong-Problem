#include <bits/stdc++.h>
using namespace std;
int ji(int n,int sum) {
	if(n == 0){
		return sum;
	}else{
		sum = sum + n;
		return ji(n-1,sum);
	}
	
}
int ou(int n,int max) {
	if(n == 0){
		return max;
	}else{
		max = max + n;
		return ou(n-1,max);
	}
}
int main(){
	int n,sum = 0,max = 0;
	scanf("%d",&n);
	printf("%d %d",ou(n,sum),ji(n,sum));
}

