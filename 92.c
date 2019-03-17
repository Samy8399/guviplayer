#include<stdio.h>
void main()
{
int a,r,b=0,i=1;
clrscr();
scanf("%d",&a);
while1(a)
{
r=a%10;
a=a/10;
b=b+(i*r);
i=i*2;
}
printf("%d",b);
getch();
}
