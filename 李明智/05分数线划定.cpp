#include <cstdio>
#include<algorithm>
using namespace std;
struct People{
    int hs;
    int cj;
    }people[5000];
int cmp(const People &a,const People &b)
{
    if(a.cj!=b.cj)
    return a.cj>b.cj;
    else
        return a.hs<b.hs;
}

int main()
{
    int n,m,i,a,lqx,sjrs=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&people[i].hs,&people[i].cj);
    }
    sort(people,people+n,cmp);
    a=m*1.5;
    lqx=people[a-1].cj;
     for(i=0;people[i].cj>=lqx;i++)
        sjrs++;

    printf("%d %d\n",lqx,sjrs);
    for(i=0;i<sjrs;i++)
        printf("%d %d\n",people[i].hs,people[i].cj);

    return 0;
}