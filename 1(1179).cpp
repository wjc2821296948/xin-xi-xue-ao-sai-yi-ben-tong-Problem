#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,C[305],M[305],E[305],S[305]={},SN[305];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>C[i]>>M[i]>>E[i];
		S[i]=C[i]+M[i]+E[i];
		SN[i]=i+1;
	}
	for(int i=n;i>1;i--){
		for(int j=0;j<i-1;j++){
			if(S[j]<S[j+1]){
				swap(S[j],S[j+1]);
				swap(C[j],C[j+1]);
				swap(M[j],M[j+1]);
				swap(E[j],E[j+1]);
				swap(SN[j],SN[j+1]);       
			}else if(S[j]==S[j+1]){   
				if(C[j]<C[j+1]){
					swap(S[j],S[j+1]);
					swap(C[j],C[j+1]);
					swap(M[j],M[j+1]);
					swap(E[j],E[j+1]);
					swap(SN[j],SN[j+1]);
                }
			}
		}
	}
	for(int i=0;i<5;i++)cout<<SN[i]<<' '<<S[i]<<endl;
}
 
