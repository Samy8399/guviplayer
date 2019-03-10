int main()
{
	int a,b,i=1,j;
	scanf("%d%d",&a,&b);
	while(b)
	{
		i=i*a;
		b--;
	}
	printf("%d",i);
}
