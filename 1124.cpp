#include <cstdio>
#include <iostream>
using namespace std; 
int main() 
{
    int m,n;
    int a[101][101],b[101][101];
    int i,j ;
    scanf("%d %d",&m,&n);
    for(i = 1;i <= n;i++){
    	for(j = 1;j <= m;j++){
    		scanf("%d",&a[i][j]);
		}
	}
        
    for(i = 1;i <= n;i++){
    	for(j = 1;j <= m;j++){
    		scanf("%d",&b[i][j]);
		}
	}
        
    
    for(i = 1;i <= n;i++){
        for(j = 1;j <= m;j++){
        	printf("%d ",a[i][j] + b[i][j]);
		}
		printf("\n");
    }
    return 0;
}
