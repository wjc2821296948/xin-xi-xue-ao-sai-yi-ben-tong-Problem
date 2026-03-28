#include<bits/stdc++.h>
using namespace std;
#define N 105
int main()
{
    int n, m, a[N][N], b[N][N];
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];
    for(int i = 1; i <= n; ++i)//遍历原矩阵a，n行m列
        for(int j = 1; j <= m; ++j)
        	b[j][n - i + 1] = a[i][j];
    for(int i = 1; i <= m; ++i)//遍历矩阵b，m行n列
    {
        for(int j = 1; j <= n; ++j)
            cout << b[i][j] << ' ';
        cout << endl;
    }
    return 0;
}

