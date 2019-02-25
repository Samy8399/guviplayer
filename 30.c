int main()
{
	char a[100],e[100];
	int b,i,j,c=0,d;
	gets(a);
	b=strlen(a);
	gets(e);
	d=strlen(e);
	for(i=0;i<b;i++)
	{
	     	if(a[i]==e[i])
	     	{
	     		e[i]=='\0';
	     		a[i]=='\0';
	     	}
	     	else
	     	c++;
	     
	}
	if(c==1)
	printf("yes");
	else
	printf("no");
}
