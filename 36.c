int main()
{
	int a,b,c,d=0;
	scanf("%d%d",&a,&c);
	while(a)
	{
		b=a%10;
		if(b==c)
		d++;
		a=a/10;
	}
	printf("%d",d);
}
