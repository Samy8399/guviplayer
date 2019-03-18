int main()
{
	int a[100],b,c,d,e,f,i,j;
	scanf("%d%d%d",&b,&c,&d);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	c--;
	e=a[c];
	for(i=c;i<d;i++)
	{
		if(a[i]<e)
		e=a[i];
	}
	printf("%d",e);
}
