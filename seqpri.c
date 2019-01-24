#include<stdio.h>

int main() {
   int a,i,b,j,c;
scanf("%d%d",&a,&c);
for(j=a+1;j<c;j++)
	{
		b=0;
		
for(i=2;i<j;i++)
{
if(j%i==0)
 {
 b=1;
break;
}
}
if(b==0)
printf(" %d",j);
}
}
