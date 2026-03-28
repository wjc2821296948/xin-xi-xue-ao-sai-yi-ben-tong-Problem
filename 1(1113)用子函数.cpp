#include <iostream>
using namespace std;
int f(int n,int max,int sum,int a[]){
	for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
    for(int i=1;i<=n;i++){
    	if(a[i]>=max)
    	max=a[i]; 
	}
    for(int i=1;i<=n;i++)
    {
    	if(a[i]!=max)
    	sum=sum+a[i];
	}
	return sum;
}
int main(){
    int  n;
	int max=-99999;
    cin>>n;
	int sum=0;
    int  a[100];
    printf("%d",f(n,max,sum,a));
    return 0;
}
	
