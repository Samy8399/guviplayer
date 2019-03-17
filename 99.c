int main()
{
int a,r,b=0,i=1;
scanf("%d",&a);
while(a)
{
r=a%10;
a=a/10;
b=b+(i*r);
i=i*2;
}
a=b;
i=1;
//printf("%d\n",a);
b=0;
while(a)
{
r=a%8;
a=a/8;
b=b+(i*r);
i=i*10;
}
printf("%d",b);
}
