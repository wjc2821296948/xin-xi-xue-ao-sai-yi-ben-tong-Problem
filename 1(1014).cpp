#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,c,a,pi,t;
    cin>>r;
    pi=1.0*3.14159;
    c=1.0*2*r;
    a=1.0*pi*r*r;
    t=1.0*2*(pi*r);
    cout<<setiosflags(ios::fixed)<<setprecision(4);
    cout<<c<<" "<<t<<" "<<a<<" "<<endl;
    return 0;
}

