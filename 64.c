int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];


   scanf("%d%d",&n,&m);


   for(i=0;i<n;i++)
           scanf("%d",&f[i]);
   
    printf("Output :\n");
   
   for(i=0;i<n;i++)
   {
       if(f[i]>=m)
       f[i]='\0';
   }
   for(i=0;i<n;i++)
   {
      
      for(j=0;j<n;j++)
      {
          if(f[i]>f[j])
          {
              m=f[j];
              f[j]=f[i];
              f[i]=m;
          }
      }
   }
   for(i=n-1;i>=0;i--)
   {
       if(f[i]!='\0')
       {
           printf("%d ",f[i]);
       }
   }
    return 0;
}
