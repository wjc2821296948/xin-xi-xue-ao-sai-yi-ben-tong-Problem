#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1[210],str2[210];
	cin >> str1;
	cin >> str2;
	int a[210],b[210],c[210];
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i< len1;i++){
		a[len1 - i] = str1[i] - '0';
		b[len2 - i] = str2[i] - '0';
	}
	int x = 0;
	int j = 1;
	for (int i= 0 ;i < len2;j++){
		c[i] = a[j] + b[j] + x;
		x = c[i] / 10;
		c[j] = c[i] % 10;
	}
	for (int i = j;i >= 1;j--){
		cout << c[i];
	}
	return 0;
} 
