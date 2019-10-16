#include<stdio.h>
#include<algorithm>
using namespace std;
typedef struct
{int a;int b;int c;int sum;int xh;}stu;
bool compare(const stu&x, const stu&y)
{     return x.sum > y.sum;}
int main()
{int n;scanf("%d",&n);
stu s[n],k;
for(int i=0;i<n;i++)
{s[i].xh=i+1;
scanf("%d%d%d",&s[i].a,&s[i].b,&s[i].c);
s[i].sum=s[i].a+s[i].b+s[i].c;
}
sort(s,s+n,compare);
for(int i=0;i<n;i++)
for(int j=i;j<n-1;j++)
if(s[j].sum==s[j+1].sum&&s[j].a<s[j+1].a)
{k=s[j+1];s[j+1]=s[j];s[j]=k;}
for(int i=0;i<n;i++)
for(int j=i;j<n-1;j++)
if(s[j].sum==s[j+1].sum&&s[j].a==s[j+1].a&&s[j].xh>s[j+1].xh)
{k=s[j+1];s[j+1]=s[j];s[j]=k;}
for(int i=0;i<5;i++)
printf("%d %d\n",s[i].xh,s[i].sum);
}