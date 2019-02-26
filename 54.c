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
 if(d==c)
 {   e=0;
  for(i=0;i<c;i++)
  {
   for(j=0;j<d;j++)
   {
    if(a[i]==b[j])
     {
      e++;
     }
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
