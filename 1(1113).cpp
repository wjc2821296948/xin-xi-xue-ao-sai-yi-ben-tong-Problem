#include <iostream>
using namespace std; 
int main() 
{
    int  n;int max=-99999;
    cin>>n;int sum=0;
    int  a[100];
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
    for(int i=1;i<=n;i++)
    {
    	if(a[i]>=max)
    	max=a[i]; 
	}
    for(int i=1;i<=n;i++)
    {
    	if(a[i]!=max)
    	sum=sum+a[i];
	}
    cout<<sum<<endl;
    return 0;
}
	
