#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main(){
	cin>>s1>>s2;
	if(s2.find(s1)!=s2.npos)
	{
		cout<<s1<<" is substring of "<<s2;
		return 0;
	}
	if(s1.find(s2)!=s1.npos)
	{
		cout<<s2<<" is substring of "<<s1;
		return 0;
	}
	cout<<"No substring";
	return 0;
}
