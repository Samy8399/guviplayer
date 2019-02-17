int main()
{
	char a[100],b[100];
	int c,d=0,i,j,k=0,e,f=0;
	gets(a);
	for(i=0;a[i]!='\0';i++);
	c=i;
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
			
			if(a[i]==a[j])
			{
				b[k]=a[i];
				k++;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(b[i]=='\0')
              {
                b[i]=b[j];
                b[j]='\0';
              }
			if(b[i]==b[j])
			{
				d++;
				b[j]='\0';
			}
		}
		if(d>f)
		{
		f=d;
		e=i;
		}
		d=0;
	}
	printf("%c",b[e]);
}
