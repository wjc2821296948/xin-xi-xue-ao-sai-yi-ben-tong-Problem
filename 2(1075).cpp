#include<iostream>
using namespace std;
int main(){
	int a[100];
	int m;
	int t = 0;
	cin >> m;
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		if(m - a[i] >= 0){
			m = m - a[i];
		}
		else{
			t++;
		}
	}
	cout << t << endl;
}
