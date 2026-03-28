#include <bits/stdc++.h> 
using namespace std;
void shift(int n){
	if (n % 3 == 0 && n % 5 == 0){
    printf("YES");
    return 1;
	}else{
    printf("NO");
    return 0;
  }
}
int main(){
	int n;
	scanf("%d",&n);
	shift(n);
	return 0;
}
