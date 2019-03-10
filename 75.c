int main()
{
	int a[100],b,i,j,k=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			if(a[i]<a[j])
			{
				k++;
			}
		}
	}
	printf("%d",k);
}
