int main()
{
    char a[100],b[100];
    int c=0,i;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==b[i])
    {
        c++;
        break;
    }
    }
    if(c!=0)
    printf("yes");
    else
    printf("no");
}
