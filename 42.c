int main()
{
	int a[100],b,d=0,i,j=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	{
		d=0;
		if(a[i]<a[i+1])
		{
		d=1;
		}
		if(d==1)
		j++;
	}
	b=b-1;
	if(b==j)
	printf("yes");
	else
	printf("no");
}
