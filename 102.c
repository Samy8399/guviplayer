#include<stdio.h>
#include<string.h>

int main() {
   int b[100],c,d=0,e,i,j,k;
   scanf("%d",&c);
   for(i=0;i<c;i++)
   scanf("%d",&b[i]);
   e=c-1;
   for(i=0;i<c;i++)
   {
       if(i!=e)
       {
       d=b[i]+b[i+1];
       }
   }
   printf("%d",d);
}  
