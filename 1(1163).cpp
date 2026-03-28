#include <cstdio>
#include <cmath>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int abc(int a, int n){
	if(a == 0){
		return n + 1;
	}
	else if(a > 0 && n == 0){
		return abc(a - 1, 1);
	}
	else{
		return abc(a - 1, abc(a, n - 1));
	}
}
int main(){
	int a, n;
	scanf("%d%d",&a,&n);
	printf("%d",abc(a, n));
	return 0;
}

