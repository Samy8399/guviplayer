#include<stdio.h>
int cat(int g)
{
    int l,b=1;
    for(l=1;l<=g;l++)
    {
     b=b*l;
    }
    return b;
}

int main() {
  int a,b,c,d,e,f,i;
  scanf("%d",&a);
  for(i=0;i<=a;i++)
  {
      if(i<=1)
      {
          printf("1");
      }
      else
      {
      b=2*i;
      c=i+1;
      e=cat(b)/(cat(c)*cat(i));
      printf("%d ",e);
  }
  }
}  
