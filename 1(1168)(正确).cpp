#include<cstdio>
#include<cstring>
char a[202],b[202];
int c[202],d[202];
int main()
{
    int l1,l2,i,k,t;
    scanf("%s%s",a,b);
    l1=strlen(a),l2=strlen(b);
    for(i=0;i<l1;i++)  c[l1-i-1]=a[i]-'0';
    for(i=0;i<l2;i++)  d[l2-i-1]=b[i]-'0';
   l1>l2?k=l1:k=l2;
   for(i=0;i<=k;i++)
     t=c[i]+d[i],c[i]=t%10,c[i+1]+=t/10;
   while(!c[k]&&k)k--;
   for(;k>=0;k--)
    printf("%d",c[k]);
    return 0;
}
