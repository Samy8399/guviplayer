int main()
{
	int a[100],b,c=0,i,j;
	scanf("%d%d\n",&b,&j);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	{
		c=0;
		if(a[i]==j)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	printf("yes");
	else
	printf("no");
}
