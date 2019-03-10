int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];
   
   
   scanf("%d%d",&n,&p);
  

   for(i=0;i<n;i++)
           scanf("%d",&f[i]);
   
    printf("Output :\n");
   
   
   for(i=0;i<n;i++)
   {
       m=0;
       for(j=0;j<n;j++)
       {
           if(f[j]==f[i])
           {
               m++;
           }
       }
       if(m==p)
       {
           printf("%d",f[i]);
           f[i]='\0';
       }
   }
    return 0;
}
