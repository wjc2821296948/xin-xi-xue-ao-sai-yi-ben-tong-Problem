#include<iostream>
 
using namespace std;
 
int main()
{
	
	int a = 0, n = 0, b;
	
	cin >> a >> n;
	
	b = a;
	
	for(int i = 1; i < n; i ++)
	{
		
		a *= b; 
		
	}
	
	cout << a;
	
	return 0;
	
}
