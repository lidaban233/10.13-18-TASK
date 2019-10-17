#include <cstdio>
#include <algorithm>
#include<string.h>
using namespace std;
struct Student {
	char name[20];
	int sf;
} student[20];
int cmp(const Student & a, const Student & b)
{
	if (a.sf != b.sf)
		return a.sf > b.sf;
	else
		return strcmp(a.name,b.name)<0;
}

int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s%d", &student[i].name, &student[i].sf);
	}
	sort(student, student + n, cmp);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%s %d\n", student[i].name, student[i].sf);
		else
			printf("%s %d", student[i].name, student[i].sf);
	}
	return 0;
}