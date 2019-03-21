#include<stdio.h>

int main() {
   int b[100],c,d=0,e,i,j,k;
   scanf("%d",&c);
   for(i=0;i<c;i++)
   scanf("%d",&b[i]);
   for(i=0;i<c;i++)
   {
       if(i+1<c)
       {
       if(b[i]<b[i+1])
       printf("%d ",b[i+1]);
       }
   }
}   
