int main()
{
	int a,b,c,d=0;
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		c=b*b;
		d=d+c;
		a=a/10;
	}
	printf("%d",d);
}
