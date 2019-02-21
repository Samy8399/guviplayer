#include<stdio.h>

int main() {
   int a[100],n,b,i,j,k;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   n--;
   while(k)
   {
       b=a[n];
       for(i=n;i>=0;i--)
       {
           a[i]=a[i-1];
       }
       a[0]=b;
       k--;
   }
   for(i=0;i<=n;i++)
   printf("%d\t",a[i]);
}  
