int main()
{
	char a[20];
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		a[i]=a[i]+3;
	}
	printf("%s",a);
}
