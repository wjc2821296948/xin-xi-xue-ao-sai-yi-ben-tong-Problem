#include <cstdio>
int main(){
  int n;
  long long sum = 1;
  scanf("%d",&n);
  for (int i = 1;i <= n;i++){
  	sum = sum * i;
  }
  printf("%lld\n",sum);
  return 0;
}
