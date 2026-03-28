#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s[9999];
	int n = 1;
	while(cin >> s[n])
        n++;
    n--;
	sort(s+1, s+1+n); 
	cout << s[1] << endl;
	for(int i = 2; i <= n; ++i)
	    if(s[i] != s[i-1])
            cout << s[i] << endl; 
	return 0;
}

