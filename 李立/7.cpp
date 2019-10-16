#include<stdio.h>
#include<algorithm>
using namespace std;
typedef struct
{char sex[10];float h;}stu;
bool compare(const stu&x, const stu&y)
{     return x.h > y.h;}
int main()
{int n;scanf("%d",&n);
    stu s[n];
    for(int i=0;i<n;i++)
    scanf("%s%f",s[i].sex,&s[i].h);
    sort(s,s+n,compare);
    for(int i=n-1;i>=0;i--)
    if(s[i].sex[0]=='m')printf("%.2f ",s[i].h);
    for(int i=0;i<n;i++)
    if(s[i].sex[0]=='f')printf("%.2f ",s[i].h);
}
