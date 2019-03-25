int main()
{
	int a[100],b,c=0,d,e,i,j,k;
	scanf("%d\n",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	if(b==1)
	printf("%d",a[0]);
	else
	{
		for(i=0;i<b;i++)
		{
			c=c+a[i];
			if(c%2==0)
			printf("%d ",c);
			else
			printf("%d ",a[i]);
		}
	}
}
