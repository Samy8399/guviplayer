int main()
{
	char a[100];
	int b,c,d,e,i,j,k;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]>='1' && a[i]<='9')
        {
        	c=a[i]-48;
        	for(j=0;j<c;j++)
        	printf("%c",a[i-1]);
        }
     }
}
