int main()
{
int n,a[20],b,i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
scanf("%d",&b);
for(i=0;i<n;i++)
{
  if(a[i]==b)
   c=1;
}
if(c==1)
 printf("yes");
else
 printf("No");
}
