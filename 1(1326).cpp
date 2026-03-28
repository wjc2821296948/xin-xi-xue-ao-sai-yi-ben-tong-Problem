#include<iostream>
using namespace std;
long long b,p,k,a,ovo,ans=1;
int main()
{
    cin>> b>> p>> k;
    if(p==0)//льеп
    {
        cout<<b<<'^'<<p<<" mod "<<k<<'='<<1;
        return 0;
    }
    a=b;
    ovo=p;
    while(ovo>0)
    {
        if(ovo&1)
        {
            ans*=a;
            ans%=k;
        }
        a*=a;
        a%=k;
        ovo/=2;
    }
    cout<<b<<'^'<<p<<" mod "<<k<<'='<<ans;
    return 0;
}
