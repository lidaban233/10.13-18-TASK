#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
typedef struct {int xh;float fs;}s;
bool compare(const s&a, const s&b)
{
     return b.fs < a.fs;
}
int main()
{
    int n,mc;
    scanf("%d%d",&n,&mc);
s student[n];
for(int i=0;i<n;i++)
{
    scanf("%d%g",&student[i].xh,&student[i].fs);
}
sort(student,student+n,compare);
printf("%d %g",student[mc-1].xh,student[mc-1].fs);
return 0;
}