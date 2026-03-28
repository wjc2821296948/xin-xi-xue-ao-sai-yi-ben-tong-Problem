#include<iostream>
using namespace std;
int main()
{
    double a, b;
    cin>>a>>b;
    double r=a-int(a/b)*b;//根据所给公式计算，其中k=int(a/b)
    if(r<0)
       r+=b;
    cout<<r<<endl;
}
