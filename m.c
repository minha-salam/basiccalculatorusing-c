#include <stdio.h>
int main()
{
int a,b,c;
char operator;
printf("enter the value");
scanf("%d%d",&a,&b);
printf("enter the operator");
scanf(" %c",&operator);
switch(operator)
{
case '+':
c=a+b;
printf("sum of numbers%d",c);
break;
case '-':
c=a-b;
printf("difference of numbers%d",c);
break;
case '*':
c=a*b;
printf("product of numbers %d",c);
break;
case '/':
if(b!=0)
{
c=a/b;
printf("qoutient of numbers%d",c);
}
else
{
printf("enter a number less than first number");
}
break;
default:
printf("invalid operator");
}
return 0;
}



