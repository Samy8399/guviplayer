int main()
{
	char a[100];
	int b,i,j;
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]==' ')
		{}
		else
		printf("%c",a[i]);
	}
}
