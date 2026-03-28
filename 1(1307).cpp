#include <bits/stdc++.h> 
using namespace std;
int main(){
    int lena,lenb,lenc;
	char s1[10010],s2[10010];
	int a[10010],b[10010],c[10010];
	cin >> s1 >> s2;
	lena = strlen(s1),lenb = strlen(s2),lenc= lena + lenb;
	for(int i = 0;i < lena;i++){
		a[lena - i] = s1[i] - '0';
	}
	for(int i = 0;i < lenb;i++){
		b[lenb - i] = s2[i] - '0';
	}
	for(int i = 1;i <= lena;i++)
		for(int j = 1;j <= lenb;j++)
		{
			c[i + j - 1 ] += a[i] * b[j];
			c[i + j ] += c[i + j - 1] / 10;
			c[i + j - 1 ] %= 10;
		} 
	if(c[lenc] == 0 && lenc > 0){
		lenc--;
	}
	for(int i = lenc;i > 0;i--){
		cout<<c[i];
	} 
    return 0;
}
