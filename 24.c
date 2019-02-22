#include<stdio.h>

int main()
{
    char a[100];
    int b=0,c,i,j;
    scanf("%s",a);
    for(j=0;a[j]!='\0';j++);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=48)&&(a[i]<=57))
        {
            b++;
        }
        
    }
    if(b==j)
    printf("yes");
    else
    printf("No");
}    
