#include<iostream>  
using namespace std;  
int main(){  
    int n,m,a[101];  
    int ans=0;  
    int i;  
    cin>>n;
    for(i=1;i<=n;i++)  
        cin>>a[i];
    cin>>m;
    for(i=1;i<=n;i++)
    	if(a[i]==m)
            ans++;
    cout<<ans<<endl;
    return 0;  
}
