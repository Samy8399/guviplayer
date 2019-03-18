int main()
{
	int a,b=0,c=0,d=0,i,j;
	scanf("%d",&a);
	b=a;
	while(b)
	{
		c=b%10;
		if(c%2!=0)
		{
			d=d+c;
		}
		b=b/10;
	}
	if(d%2==0)
	printf("E");
	else
	printf("O");
}
