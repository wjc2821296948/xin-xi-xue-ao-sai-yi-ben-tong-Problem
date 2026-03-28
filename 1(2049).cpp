#include <bits/stdc++.h>
using namespace std;
int main(){
	char s1[101],s2[101];
	char str1 = 0,str2 = 0;
	gets(s1);
	gets(s2);
	int s1len = strlen(s1);
	sort(s1,s1 + s1len);
	int s2len = strlen(s2);
	sort(s2,s2 + s2len);
	for(int i = 0;i < s1len;i++){
		if(s1[i] == ' ')
			continue;
		if('a' <= s1[i] && s1[i] <= 'z'){
			s1[i] -= 32;
		}
		str1 += s1[i]; 
	}
	for(int i = 0;i < s2len;i++){
		if(s2[i] == ' ')
			continue;
		if('a' <= s2[i] && s2[i] <= 'z'){
			s2[i] -= 32;
		}
		str2 += s2[i]; 
	}
	if(str1 == str2){
		cout<<"YES";
   	}else{
   		cout<<"NO";
	}
}
