#include<cstdio>
int main(){
	int n;
	long long s;
	double e=1.0f;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		s=1;
		for(int j=1;j<=i;j++){
			s=s*j;
		}
		e+=1.0/s;
	}
	printf("%.10lf",e);
	return 0;
}

