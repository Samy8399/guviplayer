int main()
{
	char a[200];
	int b,c=0,i,j;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='a' || a[i]=='b')
		c++;
	}
	if(c==b)
	printf("yes");
	else
	printf("no");
}
