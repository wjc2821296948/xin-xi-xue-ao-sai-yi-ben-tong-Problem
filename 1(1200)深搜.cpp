#include <bits/stdc++.h>
using namespace std;
int ct; 
void dfs(int k, int st)
{
    for(int i = st; i <= k; ++i)
    {
        if(k%i == 0)
        {
            if(i == k) 
                ct++; 
            else
                dfs(k/i, i);
        }
    }
}
int main(){
	int n, a;
	cin >> n;
	while(n--)
    {
        cin >> a;
        ct = 0;
        dfs(a, 2); 
        cout << ct << endl;
    } 
	return 0;
}

