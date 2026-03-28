#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    char op;
    scanf("%lf %lf %c",&x,&y,&op);
    switch(op)
    {
        case '+':
            printf("%lg\n",x+y);
            break;
        case '-':
            printf("%lg\n",x-y);
            break;
        case '*':
            printf("%lg\n",x*y);
            break;
        case '/':
            if(fabs(y)<1e-6)
                printf("Divided by zero!\n");
            else
                printf("%lg\n",x/y);
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
