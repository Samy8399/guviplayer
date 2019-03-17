int main() {
   int n,a[100],i,t=0,k=0,b[100],j=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       b[j]=a[i];
       j++;
   }
   for(i=0;i<n;i++)
   {
    if(a[i]<a[i+1])
      {
          t=a[i];
          a[i]=a[i+1];
          a[i+1]=t;
      }
   }
   for(i=0;i<n;i++)
   {
   	for(k=0;k<n;k++)
   	{
   		if(b[k]==a[i])
   		printf("%d\t",k);
   	}
   }
  }
