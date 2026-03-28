#include<bits/stdc++.h>
using namespace std;
bool prime(int x);
int main(){
    string str;
    int a[26]= {0};
    int max=0,min=9999;
    int i;
    cin>>str;
    for(i=0; i<str.length(); i++) 
        a[str[i]-'a']+=1;
    for(i=0; i<26; i++)  
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i]&&a[i]!=0)
            min=a[i];
    }
    if(prime(max-min))
        cout<<"Lucky Word"<<endl<<(max-min)<<endl;
    else
        cout<<"No Answer"<<endl<<0<<endl;
    return 0;
}
 
bool prime(int x){
    int i;
    if(x<2)
        return false;
    else
        for(i=2; i<=sqrt(x); i++)
            if(x%i==0)
                return false;
    return true;
}
