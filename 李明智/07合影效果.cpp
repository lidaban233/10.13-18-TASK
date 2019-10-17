#include<stdio.h>
#include<algorithm>
using namespace std;
struct stu{
    char sex[7];
    float heigh;
}people[40];
 int cmp(const stu& a,const stu& b)
{
    return a.heigh<b.heigh;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %f",&people[i].sex,&people[i].heigh);
    }
    sort(people,people+n,cmp);
    for(i=0;i<n;i++)
        if(people[i].sex[0]=='m')
    {
        printf("%.2f ",people[i].heigh);
    }
    for(i=n-1;i>=0;i--)
    {
        if(people[i].sex[0]=='f')
        {
            printf("%.2f ",people[i].heigh);
        }
    }

    return 0;
}
