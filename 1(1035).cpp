#include<iostream>
using namespace std;
int main()
{
    int a_1,a_2,n;
    int a_n,d;
    cin>>a_1>>a_2>>n;
    d=a_2-a_1;//求公差
    a_n=a_1+(n-1)*d;//等差数列通项公式
    cout<<a_n<<endl;
    return 0;
}
