int main() {
	int a,r,b=0,i=1,c=0,d=0;
scanf("%d",&a);
while(a)
{
r=a%2;
a=a/2;
b=b+(i*r);
i=i*10;
}
printf("%d\n",b);
while(b)
{
	c=b%10;
	if(c==1)
	d++;
	b=b/10;
}
printf("%d",d);
}
