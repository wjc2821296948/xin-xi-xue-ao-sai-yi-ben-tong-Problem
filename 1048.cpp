#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int abc(int a,int b){
	if(a >= 60 && b < 60 || b >= 60 && a <= 60){
		cout << "1";
	}
	else{
		cout << "0";
	}
}
int main(){
	int a, b;
	cin >> a >> b;
	abc(a,b);
	return 0;
}
