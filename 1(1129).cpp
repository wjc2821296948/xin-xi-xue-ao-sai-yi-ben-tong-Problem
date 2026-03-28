#include <bits/stdc++.h>
using namespace std;
int main(){
	string ch;
	getline(cin,ch);
	int t = 0;
	for (int i = 0;i < ch.size();i++){
		if (ch[i] >= '0' && ch[i] <= '9'){
			t++;
		}
	}
	printf("%d",t);
	return 0;
} 
