#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=1;
    int i,j;
 
    cin>>n;
    for(i=2; i<=n; i++) {
        for(j=i; j>0; j/=10){
        	if(j%10==1)	{
        		sum++;
			}
		} 
  	}
    cout<<sum<<endl;
    return 0;
}
