#include <bits/stdc++.h>
using namespace std;
int solve(int k, int st)
{
    if(k == 1)
        return 1;
    int ct = 0;
    for(int i = st; i <= k; ++i)
    {
        if(k%i == 0)
            ct += solve(k/i, i);
    }
    return ct; 
}
int main()
{
	int n, a;
	cin >> n;
	while(n--)
    {
        cin >> a;
        cout << solve(a, 2) << endl;
    } 
	return 0;
}

