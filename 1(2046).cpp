#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	char ch[201],a,b;
	getline(cin,ch);
	int len = strlen(ch);
	cin >> a;
	scanf(" %c",&b);
	for (int i = 0;i < len;i++){
		if (ch[i] == a){
			ch[i] = b;
		}
	}
	for (int i = 0; i < len;i++){
		printf("%c",ch[i]);
	}
	return 0; 
}
