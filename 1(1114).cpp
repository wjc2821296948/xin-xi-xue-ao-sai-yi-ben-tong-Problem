#include<iostream>
#include<cstdio>
using namespace std; 
int main() 
{
    double n;
    int k,v;
	int i;    
	double max = -99999,min = 99999;
    double a[3001],b[3001],sum = 0;
    double av,amax = -99999;
    
    
    cin >> n;
    
    for(i = 1;i <= n;i++)
    {
        cin >> a[i];
        if(a[i] > max)	
        {
            max = a[i];
            k = i;
        }
        if(a[i] < min)
        {	
            min = a[i];
            v = i;
        }
    	sum += a[i];
    }
    av = 1.0 * (sum - max - min) / (n - 2);
    
    for(i = 1;i <= n;i++)
    {
        if(i != k && i != v){
            b[i] = a[i] - av;
            if(b[i] < 0)
                b[i] = -b[i];
        }
        else
            b[i] = -99999;
    }
    for(i = 1;i <= n;i++)
        if(b[i] > amax)
            amax = b[i];
 
    printf("%.2lf %.2lf\n",av,amax);
    return 0;
}
