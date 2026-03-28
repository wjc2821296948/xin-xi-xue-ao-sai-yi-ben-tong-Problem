#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	char key[50],res[50];
	scanf("%s",key);
	int len = strlen(key);
	for(int i = 0;i < len;i++){
		if((key[i] >= 'a' && key[i] < 'x') || (key[i] >= 'A' && key[i] < 'X')){ //ÓÒÒÆ3 
			res[i] = key[i]+3; 
		}else {
			res[i] = key[i]-23;
		}
		
		if(res[i] >= 'A' && res[i] <= 'Z'){
			res[i] += 32;
		}else{
			res[i] -= 32;
		}
	}
	 
	for(int i = len-1;i>=0;i--){ 
		cout<<res[i];
	}
	return 0;
}
