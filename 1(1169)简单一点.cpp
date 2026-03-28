#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s1[205]={0},s2[205]={0};
	int n1[205]={0},n2[205]={0}; 
	cin>>s1>>s2; 
	int l1=strlen(s1);
	int l2=strlen(s2);
	for(int i=0;i<l1;i++){
		n1[i]=s1[l1-i-1]-'0';
	}
	for(int i=0;i<l2;i++){
		n2[i]=s2[l2-i-1]-'0';
	}
	for(int i=0;i<l1;i++){
		if(n1[i]<n2[i]){
			n1[i+1]--;
			n1[i]+=10;
		}
		n1[i]=n1[i]-n2[i];
	}
	int flag=0;
	for(int i=l1;i>=0;i--){
		if(n1[i]!=0||i==0) flag=1;
		if(flag==1)
			cout<<n1[i];
	}
	return 0;
}

