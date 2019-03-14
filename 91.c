#include<stdio.h>
void main()
{
int a,r,d=0,i=1;
clrscr();
scanf("%d",&a);
while(a)
{
r=a%2;
a=a/2;
d=d+(i*r);
i=i*10;
}
printf("%d",d);
getch();
}
