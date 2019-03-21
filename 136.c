int main()
{
	int a[1000],b,c,d=0,i,j,k;
	scanf("%d%d\n",&b,&c);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	{
		if(c==a[i])
		d++;
	}
	if(d!=0)
	{
		printf("yes ");
		printf("%d",d);
	}
	else
	 printf("no");
}
