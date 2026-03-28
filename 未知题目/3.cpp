#include <cstdio>
int main(){
  int n,sum = 0,max = 0;
  scanf("%d",&n);
  for (int i = 1;i <= n;i++){
    if(i%2!=0){
    	sum = sum + i;
	}else if(i%2==0){
		max = max + i;
	}
  }
  printf("%d %d",max,sum);
  return 0;
}
