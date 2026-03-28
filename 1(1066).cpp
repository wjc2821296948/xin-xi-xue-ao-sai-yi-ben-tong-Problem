#include<iostream>
using namespace std;
int main()
{
    int m,n,sum=0;
    int i;
 
    cin>>m>>n;//输入m、n
    for(i=m; i<=n; i++) //在区间内循环
        if(i%17==0)//满足条件
            sum+=i;//累加
 
    cout<<sum<<endl;
    return 0;
}
