int main()
{
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		j=i;
	}
	printf("%d",j);
}
