#include<stdio.h>
#define N 10
void main()
{
   int a[N]={0},flag[N]={0};
   int i,j,t=0,temp=0,g=1;;
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]%2==0)
       flag[i]=1;
       else
       flag[i]=0;
   }
   for(i=0;i<N-1;i++)
   {
       for(j=0;j<N-i-1;j++)
       if(a[j]>a[j+1])
       {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
           t=flag[j];
           flag[j]=flag[j+1];
           flag[j+1]=t;
        }
    }
    for(i=N-1;i>=0;i--)
        if(flag[i]==0)
        printf("%d ",a[i]);
        for(i=0;i<N;i++)
        if(flag[i]==1)
        printf("%d ",a[i]);
} 