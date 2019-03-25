int main()
{
	int a[100],b,c=1,d,i=0,j,k;
	scanf("%d\n",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	if(b==1)
	{
		if(a[0]%2==0)
		printf("even");
		else
		printf("odd");
	}
	else
	{
		for(i=0;i<b;i++)
		c=c*a[i];
		if(c%2==0)
		printf("even");
		else
		printf("odd");
	}
}
