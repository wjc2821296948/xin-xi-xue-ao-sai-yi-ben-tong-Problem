#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
  int n,j,a,sum = 0;
  scanf("%d",&n);
  scanf("%d",&j);
  for (int i = 1;i <= j;i++){
    scanf("%d",&a);
    n = n - a;
    if (n <= n){
      printf("%d",i + 1);
    }
  }
  return 0;
}

