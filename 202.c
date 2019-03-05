int main()
{
	char a[100];
	int b,i,j;
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		printf("%c",a[i]);
	}
	for(i=0;i<b;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{}
		else
		printf("%c",a[i]);
	}
}
