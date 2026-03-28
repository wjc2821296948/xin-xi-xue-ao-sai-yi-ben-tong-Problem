#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[1000];
	gets(s);
    int len = strlen(s);
    int sum = 0;
    for(int i = 0;i < len;i++){
        if(s[i] != ' '){
        	sum++;
		}
        else{
            if(sum > 0){
            	printf("%d,",sum);
			}
            sum = 0;
        }
    }
    cout << sum ;
	return 0;
} 
