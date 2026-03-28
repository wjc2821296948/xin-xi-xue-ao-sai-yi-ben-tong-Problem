#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char a[256];
    int len;
    int i;
    scanf("%s",a);
    len=strlen(a);//计算字符串长度
    for(i=0; i<len; i++) //输出配对碱基
    {
        if(a[i]=='A')	cout<<"T";
        if(a[i]=='T')	cout<<"A";
        if(a[i]=='G')	cout<<"C";
        if(a[i]=='C')	cout<<"G";
    }
    cout<<endl;
    return 0;
}
