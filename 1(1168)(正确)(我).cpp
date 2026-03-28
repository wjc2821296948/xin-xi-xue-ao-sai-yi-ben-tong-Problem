#include <stdio.h>
#include <string.h>
#define N 2010
char s1[N],s2[N];
int a[N],b[N],c[N];
int max(int x,int y){
	return x>y?x:y;
}
int main(){
	int len,len1,len2,i,jw;
	
	//读入字符 
	scanf("%s %s",s1,s2);
	
	//将 s1 转换为 a
	len1 = strlen(s1);
	for(i=0;i<len1;i++)
		a[i] = s1[len1-i-1]-'0';
	//将s2转换为b
	len2 = strlen(s2);
	for(i=0;i<len2;i++)
		b[i] = s2[len2-i-1]-'0';
	
	//模拟计算
	len = max(len1,len2)+1;
	jw=0;//上一轮的进位
	for(i=0;i<len;i++){
		c[i]=a[i]+b[i]+jw; //逐一处理进位
		jw=c[i]/10;
		c[i]=c[i]%10;
	} 
	
	//删除前导零
	for(i=len-1;i>=0;i--)
	{
		if(c[i]==0&&len>1)
			len--;
		else
			break;
	}
	for (i = len - 1;i >= 0;i--)
		printf("%d",c[i]);
	printf("\n");
	return 0;
}

