#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int m[100];
	int a=0,b=0,c=0,d=0;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> m[i];
		if(m[i]>=0&&m[i]<=18){
			a++;
		}else if(m[i]>=19&&m[i]<=35){
			b++;
		}else if(m[i]>=36&&m[i]<=60){
			c++;
		}else if(m[i]>=61){
			d++;
		}
	}
	printf("%.2f\%\n",(1.0*a/n)*100.0);
	printf("%.2f\%\n",(1.0*b/n)*100.0);
	printf("%.2f\%\n",(1.0*c/n)*100.0);
	printf("%.2f\%\n",(1.0*d/n)*100.0);
	return 0;
}

