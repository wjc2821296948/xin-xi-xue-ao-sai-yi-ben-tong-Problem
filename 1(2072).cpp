#include<cstdio>
 
using namespace std;
 
int main()
{
	
	float sc_all = 6 * 9.6;
	
	float sc_high = 5 * 9.4;
	
	float sc_low = 5 * 9.8;
	
	float high = sc_all - sc_high;
	
	float low = sc_all - sc_low;
	
	float ans = (sc_all - high - low) / 4;
	
    printf("%5.2f\n", ans);
	
	return 0;
	
}
