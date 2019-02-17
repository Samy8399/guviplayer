int main()
{
	int b,i,j,d,e=0;
	char a[100],c[200];
	gets(a);
	gets(c);
	for(b=0;a[b]!='\0';b++);
	for(d=0;c[d]!='\0';d++);
	if(b=d)
	{
	for(i=0;i<b;i++)
	{
		for(j=0;j<d;j++)
		{
			if(a[i]!=c[i])
			{
				e++;
			}
		}
	}
	}
	else
	printf("no");
	if(e==b)
	printf("\nYes");
	else
	printf("\nNo");
}
