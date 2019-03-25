int main()
{
	int a,b,c=0,i,j;
	scanf("%d\n",&j);
	for(i=0;i<j;i++)
	{
		scanf("%d%d\n",&a,&b);
		if(a<b)
		c++;
	}
	printf("%d",c);
}
