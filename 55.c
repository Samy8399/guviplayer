int main()
{
 char a[10],b[10];
 int i,j,d,c,e;
 scanf("%s",&a);
 scanf("%s",&b);

 for(i=0;a[i]!='\0';i++);
 c=i;
 for(j=0;b[j]!='\0';j++);
 d=j;
 for(i=0;i<c;i++)
 {
 if(a[i]>=65 && a[i]<=91)
 	{
 		a[i]=a[i]+32;
 	}
 }
 for(i=0;i<d;i++)
 {
 if(b[i]>=65 && b[i]<=91)
 	{
 		b[i]=b[i]+32;
 	}
 }
 if(d==c)
 {   e=0;
  for(i=0;i<c;i++)
   {
    if(a[i]==b[i])
     {
      e++;
     }
  }
  if(e==d)
   printf("yes");
  else
   printf("no");
 }
 else
  printf("No");
}
