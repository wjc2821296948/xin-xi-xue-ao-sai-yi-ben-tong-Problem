#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	char ch[201];
	gets(ch);
	int flag = 0;
	int len = strlen(ch);
	for (int i = 0;i < len;i++){
		if (ch[i] == ' '){
			if (flag == 0){
				flag = 1;
				cout << ch[i];
			}
		}else{
			flag = 0;
			cout << ch[i];
		}
	}
	return 0;
} 
