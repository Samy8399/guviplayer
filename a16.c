#include<stdio.h>
#include<string.h>

int main() {
 int a[100],b,c,d=0,i,j;
 scanf("%d",&b);
 for(i=0;i<b;i++)
 scanf("%d",&a[i]);
 for(i=0;i<b;i++)
 { d=0;
     for(j=i+1;j<b;j++)
     {
         if(a[i]==a[j])
         {
             d=1;
             a[j]='\0';
         }
     }
     if(d==1)
     a[i]='\0';
 }
 for(i=0;i<b;i++)
 {
     if(a[i]!='\0')
     printf("%d",a[i]);
 }
}
