#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
  double a,b,c;
  scanf("%lf %lf",&a,&b);
  c = b/a*100;
  printf("%.3lf",c);
  printf("%%");
  return 0;
}
