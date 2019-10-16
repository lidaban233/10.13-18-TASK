#include<stdio.h>
#include<algorithm>
using namespace std;
typedef struct
{int h;int f;}stu;
bool compare(const stu&x, const stu&y)
{     return x.f > y.f;}
int main()
{int n,m;scanf("%d%d",&n,&m);
int ms=m*1.5;
stu s[n],k;
for(int i=0;i<n;i++)
scanf("%d%d",&s[i].h,&s[i].f);
sort(s,s+n,compare);
for(int i=0;i<n;i++)
for(int j=0;j<n-1;j++)
if(s[j].f==s[j+1].f&&s[j].h>s[j+1].h)
{k=s[j+1];s[j+1]=s[j];s[j]=k;}
for(int i=ms-1;i<n-1;i++)
{if(s[i].f==s[i+1].f)ms++;
else break;}
int x=s[ms-1].f;
printf("%d %d\n",x,ms);
for(int i=0;i<ms;i++)
printf("%d %d\n",s[i].h,s[i].f);
}
