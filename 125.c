int main()
{
	int a[100],b=1,c=0,d,i,j;
	scanf("%d\n",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	d=a[0];
	for(i=0;i<b;i++)
	{
		if(a[i]<d)
		d=a[i];
	}
	while(d)
	{
		for(i=0;i<b;i++)
		{
			if(a[i]%d==0)
			c++;
		}
		if(c==b)
		break;
		else
		d++;
	}
	printf("%d",d);
}
