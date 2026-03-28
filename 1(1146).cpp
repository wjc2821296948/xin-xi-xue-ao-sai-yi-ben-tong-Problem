#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ch[34893];
	scanf("%s",ch);
	int len = strlen(ch);
	for (int i = 0; i < len;i++){
		if(ch[i] == ' '){
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
}
