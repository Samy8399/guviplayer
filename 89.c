int main() {
   int a,b,i,c=1,d=0,j=1,e=0;
   scanf("%d%d",&a,&b);
   d=a-b;
   for(i=1;i<=a;i++)
   {
       c=c*i;
   }
   for(i=1;i<=d;i++)
   {
       j=j*i;
   }e=c/j;
   printf("%d",e);
   return 0;
}
