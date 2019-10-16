#include<stdio.h>
#include<algorithm>
using namespace std;
typedef struct
{char h[10];int age;int c;}patient;
bool compare(const patient&x, const patient&y)
{  return x.age > y.age;}
bool ccc(const patient&x,const patient&y)
{   return x.c<y.c;}
int main()
{
    int n;scanf("%d",&n);
    patient p[n],k;
    for(int i=0;i<n;i++)
    {
    scanf("%s%d",p[i].h,&p[i].age);p[i].c=i;
    }
    sort(p,p+n,compare);
    for(int i=0;i<n;i++)
    for(int j=i;j<n-1;j++)
    if(p[j].age==p[j+1].age&&p[j].c>p[j+1].c)
    {k=p[j+1];p[j+1]=p[j];p[j]=k;}
    for(int i=0;i<n;i++)
    if(p[i].age>=60)printf("%s\n",p[i].h);
    sort(p,p+n,ccc);
    for(int i=0;i<n;i++)
    if(p[i].age<60)printf("%s\n",p[i].h);
}
