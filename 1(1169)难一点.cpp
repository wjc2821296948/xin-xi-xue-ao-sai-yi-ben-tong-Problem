#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char ach[201],bch[201];
	int a[201],b[201],c[205],lena,lenb,lenc,i,j,jw;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	//以字符串型读入数据 
	scanf("%s",ach);
	scanf("%s",bch);
	//获取字符串长度 
	lena=strlen(ach),lenb=strlen(bch);
	//反转字符串取得整型数组
	for(i=lena-1,j=1;i>=0;i--,j++) a[j]=ach[i]-'0';
	for(i=lenb-1,j=1;i>=0;i--,j++) b[j]=bch[i]-'0';
	//对位相减 注意借位 
	jw=0;
	lenc=1;
	while(lenc<=lena||lenc<=lenb){
		if(a[lenc]>=(b[lenc]+jw)){
			c[lenc]=a[lenc]-b[lenc]-jw;
			jw=0;
		}	
		else{
			c[lenc]=a[lenc]+10-b[lenc]-jw;
			jw=1;
		}
		lenc++;
	} 
	while(c[lenc]==0) lenc--;//获取数组长度 
	for(i=lenc;i>0;i--) printf("%d",c[i]);//逆序输出 
	return 0;
 } 
