 #include <stdio.h>
#include <iostream>
using namespace std;
int main(){
  double r,v;
  scanf("%lf",&r);
  v = 4/3.0*3.14*r*r*r;
  printf("%.2lf",v);
  return 0;
}
