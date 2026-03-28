#include <bits/stdc++.h>
using namespace std;
#define N 100005
int a[N], n, k;
bool cmp(int x, int y)
{
    return x > y;
}
int main()
{
    scanf("%d", &n); 
    for(int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    sort(a+1, a+1+n, cmp);
    for(int i = 1; i <= k; ++i)
        printf("%d\n", a[i]);
    return 0;
}

