#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[25]; 
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
    	cin >> s[i];
	}
    sort(s+1, s+1+n);
    for(int i = 1; i <= n; i++){
    	cout << s[i] << endl;
	}
    return 0;
}

