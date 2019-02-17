int main()
{
	char a[20];
	int b,i,j;
	gets(a);
	for(b=0;a[b]!='\0';b++);
	for(i=0;i<b;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
		}
	}
	a[0]=a[0]-32;
	puts(a);
}
