int main()
{
	int a,b,c,d,i=0,j=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		j=j+i;
	}
	printf("%d",j);
}
