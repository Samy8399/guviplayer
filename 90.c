int main() {
   int a,b,i,c=1,d,j=1,e,f=1;
   scanf("%d%d",&a,&b);
   d=a-b;
   for(i=1;i<=a;i++)
   {
       c=c*i;
   }
   for(i=0;i<=b;i++)
   {
   	   f=f*i;
   }
   for(i=1;i<=d;i++)
   {
       j=j*i;
   }
   j=f*j;
   e=c/j;
   printf("%d",e);
   return 0;
}
