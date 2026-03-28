#include <bits/stdc++.h>
using namespace std;
int c(int a,int b){
	if(a != b)
	{
		if(a > b)
		    a = a-b;
		else
            b = b-a;
            return c(a,b);
	}
	else{
		return a; 
	}
	
}
int main(){
	int a, b;
	cin >> a >> b;
	cout << c(a,b);
	return 0;
}
