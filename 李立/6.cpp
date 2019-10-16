#include<stdio.h>
#include<algorithm>
using namespace std;
typedef struct
{int h;int f;}stu;
bool compare(const int&x, const int&y)
{     return x > y;}
int main()
{int num[10];
for(int i=0;i<10;i++)scanf("%d",&num[i]);
sort(num,num+10,compare);
for(int i=0;i<10;i++)
if(num[i]%2==1)printf("%d ",num[i]);
for(int i=9;i>=0;i--)
if(num[i]%2==0)printf("%d ",num[i]);
}
