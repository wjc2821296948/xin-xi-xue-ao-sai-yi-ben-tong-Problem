#include <bits/stdc++.h>
using namespace std;
struct water{
	int time;
	int id;//下表 
}a[1010];
bool cmp(struct water a,struct water b)
{
	return a.time < b.time;
}
int main(){
	int n;
	double alltime = 0;
	scanf("%d",&n);
	for (int i = 1;i <= n;i++){
		scanf("%d",&a[i].time);
		a[i].id = i;//第1个人 
	}
	sort(a + 1,a + 1 + n,cmp);
	for (int i = 1;i <= n;i++){
		cout << a[i].id << " ";
		alltime += a[i - 1].time * (n - i + 1);
	}
	printf("\n%.2f",alltime / n);
	return 0;
}
