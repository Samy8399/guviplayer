int main()
{
	char a[100];
	int b,i,j;
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		j=i+1;
		if(a[i]==' ' && a[i-1]==' ')
		{}
		else
		printf("%c",a[i]);
	}
}
