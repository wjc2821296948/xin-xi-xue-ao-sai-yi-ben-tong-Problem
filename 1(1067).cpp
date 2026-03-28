#include <iostream>
using namespace std;
int main()
{
    int k , a;				 
    int q=0,w=0,e=0;		//1 5 10计数器 
    cin >> k;				//确定个数 
    for(int i=0;i<k;i++)	//循环输入n次 
 	{
 		cin >> a;			//输入a 
 		if(1==a)			//等于1则计数器q加一 
 		q++;
 		if(5==a)			//等于5则计数器w加一 
 		w++;
 		if(10==a)			//等于10则计数器e加一 
 		e++;
	}
	cout << q <<endl << w << endl << e; //输出 
    return 0;
}


