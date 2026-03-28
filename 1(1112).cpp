#include <iostream>
using namespace std; 
int main() 
{
    int m,a[10001];
    int max=0,min=99999;
    int d;
    int i;
    
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a[i];
        if(a[i]>max)	max=a[i];
        if(a[i]<min)	min=a[i];
    }
    d=max-min;
    cout<<d<<endl;
    return 0;
}
