int main()
{
	char a[20];
	int b,i,j;
	gets(a);
	for(b=0;a[b]!='\0';b++);
	//printf("%d",b);
	for(i=0;i<b;i++)
	{
	   if(a[i]==' ')
	   {
	   	a[i+1]=a[i+1]-32;
	   	}
	   
	}
	puts(a);
	for(i=0;i<b;i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]<65)
			{a[i+1]=a[i+1]+32;
				}
			a[i+1]=a[i+1];
			i++;
	     }
	     else
	     {
	     	if((a[i]>=65)&&(a[i]<=90))
	     	{
	     		a[i]=a[i]+32;
	        }
	        else
	        a[i]=a[i];
	      }  
	 }  
	a[0]=a[0]-32;
	puts(a);
}


	
	
	
	
	
	
		
		
			
		
	
	


