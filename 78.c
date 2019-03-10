#include<stdio.h>
void main()
{
    int c[25],d[25],a[200];
	int b,i,j,t,e,k=0;
clrscr();
scanf("%d %d",&k,&e);
for(i=0;i<k;i++)
 scanf("%d",&c[i]);
 for(i=0;i<e;i++)
 scanf("%d",&d[i]);
 b=k+e;
 for(i=0;i<k;i++)
 	a[i]=c[i];
 j=0;
 for(i=k;i<b;i++){
 a[i]=d[j];
 	j++;}
for(i=0;i<b;i++)
{
 for(j=i+1;j<b;j++)
 {
 if(a[j]<a[i])
  {
   t=a[j];
   a[j]=a[i];
   a[i]=t;
  }
 }
}
for(i=0;i<b;i++)
 printf("%d\t",a[i]);
getch();
}
