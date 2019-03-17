int main()
{
	char a[1000],d[200];
	int b,c,i,j=0;
	gets(a);
	scanf("%s",d);
	b=strlen(a);
	c=strlen(d);
	for(i=0;i<b;i++)
	{
		if(a[i]==' ')
		j++;
		if(a[i]==d[c-1])
		{
			if(a[i-1]==d[c-2])
			{
				printf("%d",j+1);
			}
		}
	}
}
