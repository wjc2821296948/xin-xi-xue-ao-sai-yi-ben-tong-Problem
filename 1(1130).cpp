#include <bits/stdc++.h>
using namespace std;
int main(){
	char ch[10001];
	int a[27];
	int len = 0;
	get(ch);
	len = strlen(ch);
	for (int i = 0;i < len;i++){
		a[ch[i] - 'a']++;
	}
	for (int i = 0; i < len;i++){
		if (a[i] == 1){
			cout << ch[i];
			return 0;
		}
	}
	return 0;
}
