#include<stdio.h>
void main()
{
int a,r,b=0,i=1;
clrscr();
scanf("%d",&a);
while1(a)
{
r=a%2;
a=a/2;
b=b+(i*r);
i=i*8;
}
printf("%d",b);
getch();
}
