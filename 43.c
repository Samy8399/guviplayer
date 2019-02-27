#include<stdio.h>
#include<string.h>

int main() {
 char a[100],b[10],g[10];
 int c,d,i,j,e=0,f,k=0;
 scanf("%s",a);
 scanf("%s",b);
 c=strlen(a);
 d=strlen(b);
 for(i=0;i<c;i++)
 {
     e=0;
     if(a[i]==b[0])
     {
         k=i;
         for(j=0;j<d;j++)
         {
             if(a[k]!=b[j])
             e=1;
             k++;
         }
         if(e==0)
        break;
     }
 }
 if(e!=1)
 printf("yes");
 else
 printf("no");
}
