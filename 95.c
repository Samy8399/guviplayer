int main()
{
	int a,b,c,d[100],e[100],i=0,j=0,k=0;
	scanf("%d%d%d",&a,&b,&c);
	b=b+c;
	i=a;
	while(i)
	{
		j=i%10;
		d[k]=j;
		i=i/10;
		k++;
	}
	for(j=k-1;j>=0;j--)
	{
	e[i]=d[j];
	i++;
	}
	printf("%d",e[b-1]);
}
