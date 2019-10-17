#include<stdio.h>
#include<algorithm>
using namespace std;
struct stu{
    int num;
    char id[10];
    int age;
}br[100];
 int cmp1(const stu& a,const stu& b)
{
    if(a.age!=b.age)
    return a.age>b.age;
    else
    return a.num<b.num;
}
int cmp2(const stu&a,const stu&b)
{
    return a.num<b.num;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d",&br[i].id,&br[i].age);
        br[i].num=i;
    }
    sort(br,br+n,cmp1);
    for(i=0;i<n;i++)
        if(br[i].age>=60)
    {
        printf("%s\n",br[i].id);
    }
    sort(br,br+n,cmp2);
    for(i=0;i<n;i++)
    {
        if(br[i].age<60)
        {
            printf("%s\n",br[i].id);
        }
    }

    return 0;
}
