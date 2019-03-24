int main()
{
    char a[100];
    int b,i,j;
    gets(a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        for(j=i+1;i<b;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=a[i]-32;
                a[j]=a[j]-32;
            }
            if(a[i]==a[j]+32)
            {
                a[j]=a[j]-32;
            }
        }
    }
    for(i=0;i<b;i++)
    printf("%c",a[i]);
}
