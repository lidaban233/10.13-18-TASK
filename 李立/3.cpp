#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
typedef struct {char name[20];int fs;}s;
bool compare(const s&a, const s&b)
{
     return b.fs < a.fs;
}
int main()
{
    int n,mc;
    scanf("%d",&n);
s student[n],temp;
for(int i=0;i<n;i++)
{
    scanf("%s%d",&student[i].name,&student[i].fs);
}
sort(student,student+n,compare);
for(int i=0;i<n;i++)
    for(int j=i;j<n-1;j++)
{if(student[j].fs==student[j+1].fs)
    if(strcmp(student[j].name,student[j+1].name)>0)
    {
        temp=student[j+1];student[j+1]=student[j];student[j]=temp;
    }
}
for(int i=0;i<n;i++)
    printf("%s %d\n",student[i].name,student[i].fs);
return 0;
}