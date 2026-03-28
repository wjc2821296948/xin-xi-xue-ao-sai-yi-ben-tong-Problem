#include<iostream>
#include<cmath>
using namespace std;
bool judge(int x){
    int i=2;
    while( i<=floor(sqrt(x)) && (x%i!=0) )
        i++;
    if(i>floor(sqrt(x)))
        return true;
    return false;
}
int main(){
    int x;
    int i;
    for(x=6; x<=100; x+=2){
    	for(i=2; i<=x/2; i++){
    		if(judge(i)&&judge(x-i)){
                cout<<x<<"="<<i<<"+"<<x-i<<endl;
                break;
            }
    	}
	}
	return 0;
}
