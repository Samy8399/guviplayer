int main()
{
	int a,b,c,d,i=0,j=1,n=0;
	scanf("%d",&a);
	d=a;
	while(a)
	{
		a=a/10;
		i++;
	}
	i--;
	b=i;
	while(i)
	{
		j=j*10;
		i--;
	}
	//printf("%d",b);
	while(b)
	{
		n=d/j;
		d=d%10;
		b--;
		j=j/10;
		if(n!=0)
		c=n;
	}
	printf("%d",c+d);
}
