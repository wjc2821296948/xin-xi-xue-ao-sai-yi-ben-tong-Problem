#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[1001][1001],maxn,n,m;
	bool cnt;
    for(int i=1;i<=5;i++){
    	for(int j=1;j<=5;j++){
    		cin>>a[i][j];
		}
	}
        
    for(int i=1;i<=5;i++){
        cnt=true;
        maxn=0;
        for(int j=1;j<=5;j++){
            if(a[i][j]>maxn){
                maxn=a[i][j];
                n=i;
                m=j;
                
            }
        }
        for(int k=1;k<=5;k++){
            if(a[k][m]<maxn)cnt=false;
        }
        if(cnt==true){
            cout<<n<<" "<<m<<" "<<maxn;
            return 0;
        }
    }
    cout<<"not found";
    return 0;
}
 
