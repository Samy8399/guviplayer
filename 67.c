int main() 
{
	int n,a[30],i,j,t=0,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		c=1;
	    for(j=i+1;j<n;j++)
	    {
			if(a[i]==a[j])
			c++;
	    }
	    if(c>t)
		     t=c;
		}
	printf("%d",t);
}
