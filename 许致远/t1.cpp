#include<stdio.h>
  struct stu
  {
      int num;
      double score;
  };
  int main()
  {
      int n,k,i,j,flag;
     struct stu a[105],t;
     
     scanf("%d%d",&n,&k);
     for(i=0;i<n;i++)
     {         scanf("%d%lf",&a[i].num,&a[i].score);
     }
     
     for(i=1;i<n;i++)
     {
         flag=1;
         for(j=0;j<n-i;j++)
         {
             if(a[j].score<a[j+1].score)
             {
                 flag=0;
                 t=a[j];
                 a[j]=a[j+1];
                 a[j+1]=t;
             }
         }         if(flag) break; 
     }
     printf("%d %g\n",a[k-1].num,a[k-1].score);
     return 0;
 }