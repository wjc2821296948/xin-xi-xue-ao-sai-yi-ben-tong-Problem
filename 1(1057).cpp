#include<cstdio>
int main(void) {
int a, b;
char op;
scanf("%d%d %c", &a, &b, &op);
if(op == '+')
printf("%d\n", (a + b));
else if(op == '-')
printf("%d\n", (a - b));
else if(op == '*')
printf("%d\n", (a * b));
else if(op == '/') {
if(b == 0)
printf("Divided by zero!\n");
else
printf("%d\n", (a / b));
}
else
printf("Invalid operator!\n");
return 0;
}

