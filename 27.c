int main()
{
	char a[100];
	int b,i,j;
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		a[i]=a[i]+32;
		else
		a[i]=a[i]-32;
		
		printf("%c",a[i]);
	}
}
