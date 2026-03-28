#include<bits/stdc++.h>
using namespace std;
int count2(int n)//求数字n中2的个数
{
    int ct = 0;//计数
    for(int a = n; a > 0; a /= 10)
    {
        if(a % 10 == 2)
            ct++;
    }
    return ct;
}
int main()
{
    int l, r, ct = 0;//ct:计数
    cin >> l >> r;
    for(int i = l; i <= r; ++i)//统计1~n中2的个数
        ct += count2(i);
    cout << ct << endl;
    return 0;
}

