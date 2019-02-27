void main()
{
int a,b,c,d;
clrscr();
scanf("%d%d",&a,&b);
if(a<b)
{a=a+b;
b=a-b;
a=a-b;
} d=a;
printf("%d\t%d",a,b);
while(a)
{
if((a%d==0)&&(a%b==0))
{
 c=a;
 a=-1;
}
a++;
}
printf("\n%d",c);
getch();
}
