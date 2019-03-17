int main()
{
	int a,b,c,d,i=0,j=0;
	scanf("%d%d",&a,&b);
	while(a)
	{
		c=a%10;
		//printf("%d\t",c);
		if(c<=b)
		{
			i++;
			//printf("%d  %d",c,i);
		}
		a=a/10;
		//printf("\n");
	}
	if(i>=b)
	printf("yes");
	else
	printf("no");
}
