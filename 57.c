int main()
{
	char a[100],b[10];
	int i,j,n,d=0;
	gets(a);
	gets(b);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			d++;
		}
	}
	printf("%d",d);
}
