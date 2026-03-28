
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[101];
	double avg = 0;
	int sum = 0;
	for (int i = 1;i <= n;i++){
		cin>>a[i];
	}
	for(int i = 1;i <= n;i++){
		sum = sum + a[i];
	}
	avg = sum * 1.0 / n;
	printf("%.2lf",avg);
	return 0;
}
