#include<iostream>
using namespace std;
int a(int n,int sum){
	if(n == 0){
		return sum;
	}else{
		sum+= n;
		return a(n-1£¬sum);
	}
} 
int main(){
    int n,sum = 0;
    scanf("%d",&n);
    printf("%d",a(n,sum)); 
    return 0;
}
