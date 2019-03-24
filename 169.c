int main()
{
	char a[100];
	int b,c,d,e,i,j,k;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		c=1;
		for(j=i;j<b;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				a[j]='\0';
			}
		}
		if(a[i]!='\0');
		printf("%c%d",a[i],c);
	}
}
