int main() 
{
    int a[10],b,c,i,n,j,max=0;
	clrscr();
	scanf("%d %d",&n,&c);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	j=0;
    while(j<c)
	{
	    scanf("%d",&b);
	    a[n]=b;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	        }
	    }
	    printf("%d ",max); 
	j++; 
	}
}
