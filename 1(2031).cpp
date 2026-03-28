#include <cmath>
#include <iostream>
#include <cstdio>
#include <string> 
using namespace std;
int main(){
	for (int i = 33;i <= 99;i++){
		int n = i * i;
		int a = n % 10;
		int b = n / 10 % 10;
		int c = n / 10 / 10 % 10;
		int d = n / 10 / 10 / 10 % 10;
		if (a == b && c == d){
			printf("%d",n);
		}
	}
	return 0;
}
