#include<stdio.h>
void main()
{
 int a[25],b,i,j;
 clrscr();
 scanf("%d",&b);
 for(i=0;i<b;i++)
  scanf("%d",&a[i]);
 for(i=0;i<b;i++)
  {
   for(j=i+1;j<b;j++)
   {
    if(a[i]=='\0')
     {
      a[i]=a[j];
      a[j]='\0';

     }
     if(a[i]==a[j])
      a[j]='\0';
    }
  }
 for(i=0;a[i]!='\0';i++)
   printf("%d\t",a[i]);
 getch();
}
