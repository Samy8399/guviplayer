int main()
{
	char a[100],b[100];
	int c,d,e=0,f,i,j,k;
	scanf("%s",a);
	gets(b);
	c=strlen(a);
	d=strlen(b);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			if(a[i]==b[j])
			{
				b[j]='\0';
				e++;
			}
		}
	}
	if(e<=c)
	printf("true");
	else
	printf("false");
}
