int main()
{
	char a[20];
	int b,c=0,d=0,i,j;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='(')
		d++;
		if(a[i]==')')
		c++;
	}
	if(c==d)
	printf("yes");
	else
	printf("no");
}
