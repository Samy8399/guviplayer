#include<stdio.h>

int main() {
   int a[100][100],b,c,d=1,e=1,f,i,j,k;
   scanf("%d",&b);
   for(i=0;i<b;i++)
   {
    for(j=0;j<b;j++)
      scanf("%d",&a[i][j]);
   }
   for(i=0;i<b;i++)
   {
       for(j=0;j<b;j++)
       {
           if(i==j)
           d=d*a[i][j];
       }
   }
    for(i=0;i<b;i++)
   {
       for(j=0;j<b;j++)
       {
           if((i+j)==(b-1))
           e=e*a[i][j];
       }
   }
    f=e+d;
    printf("%d",f);
}    
   
