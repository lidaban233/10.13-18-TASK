#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
int n;scanf("%d",&n);
int num[n],m=0,k=n;
for(int i=0;i<n;i++)scanf("%d",&num[i]);
sort(num,num+n);
for(int i=0;i<n;i++)
{if(m==num[i])k--;
m=num[i];
}
printf("%d\n",k);m=0;
for(int i=0;i<n;i++)
{
if(m!=num[i])printf("%d ",num[i]);
else continue;
m=num[i];
}
}
