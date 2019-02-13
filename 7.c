int main()
{
   char a[100];
   int i,j,b;
   gets(a);
   for(b=0;a[b]!='\0';b++);
   for(i=0;i<b;i++)
   {
   	if(i%2==0)
   	{
   		j=a[i];
   		a[i]=a[i+1];
   		a[i+1]=j;
   	}
   }
   for(i=0;i<b;i++)
   printf("%c",a[i]);
  }
