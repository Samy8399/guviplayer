int main()
{
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
    {
        b=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                b++;
            }
        }
        if(b==0)
        {
            printf("%d\t",i);
        }
       }    
    }               
}
