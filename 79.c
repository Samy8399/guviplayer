#include<stdio.h>

int main()
{
    int a[100],b,c[100],d,e,f,i,j,k,l;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);
    k=0;
    for(i=0;i<b;i++){
    for(j=i+1;j<b;j++){
        if(a[i]<a[j]){
            c[k]=a[j]-a[i];
            k++;
	}
	else
	{
	    c[k]=a[i]-a[j];
	    k++;
	}
	}
}
d=0;
for(i=0;i<k;i++)
{
    if(c[i]>d)
    {
        d=c[i];
    }
}
printf("%d\t",d);
}
