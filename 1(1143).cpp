#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[1000];
	gets(s);
    int len = strlen(s);
    int sum = 0;
    char maxn[10000];
	char little[9999]; 
	int maxi = 0;
	int liti = 0;
    for(int i = 0;i < len;i++){
        if(s[i] != ' '){
        	sum++;
		}
        else{
            if(	 < sum){
            	maxn[maxi] = s[i];
            	maxi++;
			}
			if ( > sum){
				little[liti] = s[i];
				liti++;
			}
			sum = 0;
            
        }
    }
    maxlen = strlen(maxn); 
    litlen = strlen(little);
    for (int i = 0;i < maxlen;i++){
    	printf("%c",maxn[i]);
	}
	printf("\n");
	for (int i = 0;i < litlen;i++){
    	printf("%c",little[i]);
	}
	return 0;
}
