#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;
const int MaxN = 2000000;
int n;
int pow_2[22];
bool is_pow2[2000000];
string dfs(int k){
	if(0 == k)
		return "";
	if(1 == k)
		return "2(0)";
	if(2 == k)
		return "2";
	int i = 1;
	for(; i <= 20; i++)
	{
		if(pow_2[i] > k)
		{
			break;
		}
	}
	string tp;
	k = k - pow_2[i - 1];
	if(k == 0)
		tp = "";
	else
		tp = "+";
	if(i - 1 == 1)
		return "2" + tp + dfs(k);
	return "2(" + dfs(i - 1) + ")" + tp + dfs(k);
}
int main(){
	pow_2[0] = 1;
	for(int i = 1; i <= 20; i++){
		pow_2[i] = 2 * pow_2[i - 1];
		is_pow2[pow_2[i]] = true;
	}
	scanf("%d", &n);
	printf("%s\n", dfs(n).c_str());
	return 0;
}
