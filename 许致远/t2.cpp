 #include<stdio.h>
 int main()
 {
     int n,a[500],i,j,t,flag;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=1;i<n;i++)
     {
         flag=1;
         for(j=0;j<n-i;j++) 
         {
             if(a[j]>a[j+1]) 
             {
                 flag=0;
                 t=a[j]; 
                 a[j]=a[j+1]; 
                 a[j+1]=t; 
             }
         }
         if(flag)  break; 
     }
     flag=1;
     for(i=0;i<n;i++)
     {
         if(a[i]&1)
         {
             if(flag)
             {
                 printf("%d",a[i]);
                 flag=0;
             }
             else printf(",%d",a[i]);
         }
         
     }
     printf("\n");
     return 0;
 }