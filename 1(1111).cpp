#include <iostream>
using namespace std;
int main()
{
    int school,extra;
    int time[8];
    int day,max=0;
    int i;
 
    for(i=1; i<=7; i++)
    {
        cin>>school>>extra;
        time[i]=school+extra;
    }
 
    for(i=1; i<=7; i++)
    {
        if(time[i]>max)
        {
            max=time[i];
            day=i;
        }
    }
    if(max>8)
        cout<<day<<endl;
    else
        cout<<0<<endl;
    return 0;
}

