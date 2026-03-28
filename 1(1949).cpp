#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l, r, ct = 0;//ct:计数
    cin >> l >> r;
    for(int i = l; i <= r; ++i)
    {
        for(int a = i; a > 0; a /= 10)//分离各位数字
        {
            if (a % 10 == 2)//若这一位是2
                ct++;
        }
    }
    cout << ct << endl;
    return 0;
}

