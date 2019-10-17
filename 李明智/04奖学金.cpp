#include <cstdio>
#include <algorithm>
using namespace std;
struct Student {
    int num;
	int t;
	int yw;
    int sx;
    int yy;
} student[300];
int cmp(const Student & a, const Student & b)
{
	if(a.t>b.t)return 1;
    if(a.t<b.t)return 0;
    if(a.yw>b.yw)return 1;
    if(a.yw<b.yw)return 0;
    if(a.num<b.num)return 1;
    return 0;
}

int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d%d", &student[i].yw, &student[i].sx,&student[i].yy);
        student[i].t=student[i].yw+student[i].sx+student[i].yy;
        student[i].num=i+1;
	}
	sort(student, student + n, cmp);
	for (i = 0; i < 5; i++)
	{
			printf("%d %d\n", student[i].num, student[i].t);
	}
	return 0;
}