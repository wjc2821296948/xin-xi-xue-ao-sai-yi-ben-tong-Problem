#include <bits/stdc++.h>
using namespace std;
struct node{
	string name;//学生姓名
	int s1,s2;//期末平均成绩和班级评议成绩
	char p1,p2;//是否是学生干部，是否是西部省份学生
	int lws;//论文数
   int sum;//获得的奖学金
   int index;//序号，当奖学金数目一样时，序号小的先输出
}stu[110];
int n,ans=0;
bool cmp(node a,node b){
	if(a.sum!=b.sum){
		return a.sum>b.sum;//按照奖学金排
	}
	else{
		return a.index<b.index;//如果奖学金相同按照序号排
	}
}
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>stu[i].name>>stu[i].s1>>stu[i].s2>>stu[i].p1>>stu[i].p2>>stu[i].lws;
		if(stu[i].s1>80&&stu[i].lws>=1){
			stu[i].sum+=8000;//院士奖学金
		}
        if(stu[i].s1>85&&stu[i].s2>80){
        	stu[i].sum+=4000;//五四奖学金
		}
        if(stu[i].s1>90){
        	stu[i].sum+=2000;//成绩优秀奖
		}
        if(stu[i].p2=='Y'&&stu[i].s1>85){
        	stu[i].sum+=1000;//西部奖学金
		}
        if(stu[i].s2>80&&stu[i].p1=='Y'){
        	stu[i].sum+=850;//班级贡献奖
		}
        stu[i].index=i,ans+=stu[i].sum;
        //ans为N个学生获得的奖学金的总数
	}
	sort(stu+1,stu+1+n,cmp);
	cout<<stu[1].name<<endl<<stu[1].sum<<endl<<ans;
	return 0;
}
