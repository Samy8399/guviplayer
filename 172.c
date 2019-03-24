int main()
{
	int a,c[100],b,d,e,f,i=0,j,k;
	scanf("%d",&a);
	while(a)
	{
		e=a%10;
		c[i]=e;
		i++;
		a=a/10;
	}
	d=i;
	for(i=0;i<d;i++)
	{
		for(j=i+1;j<d;j++)
		{
			if(c[j]>c[i])
              {
                 f=c[j];
                 c[j]=c[i];
                 c[i]=f;
               }
         }
       }
       for(i=0;i<d;i++)
       printf("%d",c[i]);
}
