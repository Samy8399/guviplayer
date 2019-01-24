#include<stdio.h>

int main() {
   int i,j,m,n,c=0,d=0;
   char a[10],b[10];
   scanf("%s",&a);
   scanf("%s",&b);
   for(i=0;a[i]!='\0';i++);
   m=i;
   for(i=0;b[i]!='\0';i++);
   n=i;
   if(m==n)
   {
    for(i=0;i<m;i++)
    {
      for(j=i+1;j<n;j++) 
      {
          if(a[i]==a[j])
          {
              if(b[i]==b[j])
              c++;
              d++;
          }
      }
   }
   for(i=0;i<m;i++)
   {
      for(j=i+1;j<n;j++) 
      {
          if(b[i]==b[j])
          {
              if(a[i]==a[j])
              c++;
              d++;
          }
      }
   }
   if(c==d)
  {
      printf("yes");
  }
  else
  printf("No");
   
}
  else
   printf("No");
  return 0; 
}
