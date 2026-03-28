#include <bits/stdc++.h>
using namespace std;
long long n,k,a[10001];
double b[10001],temp[1001];
int main(){
    cin >> n;
    cin >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i] >> b[i];
        temp[i] = b[i];
    }
    sort(b + 1,b + 1 + n);
    for(int i=1;i<=n;i++)
        if(temp[i]==b[k]){
            cout<<a[i]<<' '<<b[k];
            return 0;
        }
    return 0;
}
