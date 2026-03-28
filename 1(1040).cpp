#include <bits/stdc++.h>
using namespace std;
bool sb(int n)
{
	if (n <= 0){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	double n;
	cin >> n;
	double t;
	if (sb(n) == 1){
		t = n * -1; 
		printf("%.2lf",t );
	}
	else if(sb(n)  == 0){
		printf("%.2lf",n);
	}
	 
	return 0;
}
