#include <bits/stdc++.h>
using namespace std;
int s(int a,int b){
	if(a == 1)
        return a;
    int c = 0;
    for(int i = b; i <= a; i++)
    {
        if(a%i == 0)
            c += s(a/i, i);
    }
    return c; 
}
int main(){
	int n, a;
	cin >> n;
	while(n--){
        cin >> a;
        cout << s(a, 2) << endl;
    }
	return 0;
}

