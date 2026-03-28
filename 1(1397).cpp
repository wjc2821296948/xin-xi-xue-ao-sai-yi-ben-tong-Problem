#include<cstdio>
using namespace std;
int come(int a,char b,int c){
    if(b == '+'){
    	return a + c;
	}
    if(b == '-'){
    	return a - c;
	}
    if(b == '*'){
    	return a * c;
	}
    if(b == '/'){
    	return a / c;
	}
    if(b == '%'){
    	return a % c;
	}
}
int main(){
    int a,sum = 0,c;
    char b;
    scanf("%d%c%d",&a,&b,&c);
    printf("%d",come(a,b,c));
    return 0;
}

