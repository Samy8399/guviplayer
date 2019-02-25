int main()
{
	char a[100],e[100];
	int b,i,j,c=0,d,k;
	scanf("%s",a);
	scanf("%s",e);
	b=strlen(a);
	d=strlen(e);
	scanf("%d",&k);
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
	if(c==k)
	printf("yes");
	else
	printf("no");
}
