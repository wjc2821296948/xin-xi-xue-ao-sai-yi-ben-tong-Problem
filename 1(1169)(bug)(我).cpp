#include<iostream>  
#include<cstring>  
#include<string>  
using namespace std;  
int main()  
{
    char str1[256],str2[256];
    int a[201],b[101],c[101];
    cin >> str1 >> str2;
    int len1 = str1.size(),len2 = str2.size();
    for (int i = 0; i < len1;i++){
    	a[len1 - i - 1] = str1[i] - '0';
	}
	for (int i = 0;i < len1;i++){
		c[i] = a[i] - b[i] - x;
		if (a[i] - b[i] > 0){
			x = 0;
		}else{
			x = 1;
			c[i] = c[i] * -1;
		}
	}
	for (int i= len - 1;i >= 0;i--){
		cout <<c[i];
	}
    return 0; 
}
