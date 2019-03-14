int main()
{
	int a[100],b,i,j,c=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
	}
	if(c==0)
	printf("no");
	else
	printf("yes");
}
