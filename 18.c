int main()
{
    int i,j,k,l,m,n,o=0;
   char a[5],b[10000];
   scanf("%d",&l);
   strcpy(a,"kabali");
   for(i=0;i<l;i++)
   {
       n=0;
       scanf("%s",b);
       for(j=0;j<6;j++)
       {
           m=0;
           for(k=0;k<6;k++)
           {
               if(a[j]==b[k])
               {
                   b[k]='\0';
                   m=1;
                   break;
               }
           }
           if(m==0)
           break;
           else
           n++;
       }
       if(n==6)
       o++;
       
   }
printf("%d",o);
    return 0;
}
