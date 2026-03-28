#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, w[10005], a[105] = {}, mx = 0;//a¾Í ÊÇtime 
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> w[i];
    for(int i = 1; i <= n; i++){
        int b = 1;
        for(int j = 1; j <= m; j++)
            if(a[j] < a[b])
                b = j;
        a[b] += w[i];
    }
    for(int i = 1; i <= n; ++i)
        mx = max(mx, a[i]);
    cout << mx;
    return 0;
}

