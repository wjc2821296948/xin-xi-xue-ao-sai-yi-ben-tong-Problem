#include <bits/stdc++.h>
using namespace std;
double calculate(double x)
{
    double sum=0,temp=x;
    int i=1;

    while(fabs(temp/i)>=1e-6)
    {
        sum+=temp/i;
        temp=-1*x*x*temp;
        i+=2;
    }
    return sum;
}
int main()
{
    double a,pi;
    a=1/sqrt(3);
    pi=6*(calculate(a));
    printf("%.10lf\n",pi);
    return 0;
}
