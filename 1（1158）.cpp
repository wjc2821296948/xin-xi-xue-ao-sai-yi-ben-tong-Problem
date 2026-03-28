#include<bits/stdc++.h>
using namespace std;
int abc(int n){
	if(n == 1){
		return 1;
	} 
	else{
		return n + abc(n - 1);
	}
}
int main(){
	int n;
	scanf("%d",&n) ;
	printf("%d",abc(n));
	return 0;
}

