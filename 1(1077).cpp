#include <iostream>
using namespace std;
int main (){
	int n;
	int t;
	cin >> n;
	int a[100];
	for (int i = 1;i <= n;i++){
		cin >> a[i];//6
	}
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	int x4 = 0;
	for (int i = 1;i <= n;i++){
		x1 = a[i] % 10;
		x2 = a[i] / 10 % 10;
		x3 = a[i] / 100 % 10;
		x4 = a[i] / 1000 % 10;
		if(x1 - x2 - x3 - x4 > 0){
			t++;
		}
	}
	cout << t << endl;
}
