int main()
{
	int b,a[100],c=0,d,i,j;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	while(b)
	{
		c=c+b;
		b--;
	}
	printf("%d",c);
}
