#include<stdio.h>
void main()
{
int x,p,total=0;
scanf("%d%d",&x,&p);
p=100-p;
while(x>0)
{
total+=x;
x=(p*x)/100;
}
printf("%d",total);
}
