int main()
{
	int b,a[100],i,j;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	j=0;
	for(i=0;i<b;i++)
	{
		if(a[i]<0)
		j++;
	}
	printf("\n%d",j);
}
