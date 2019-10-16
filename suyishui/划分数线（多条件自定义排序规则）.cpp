#include<bits/stdc++.h>
using namespace std;
struct stu { long x; float y; };
bool pi(stu p, stu q)
{
	if (p.y > q.y)return 1;
	else if (p.y == q.y&&p.x < q.x)return 1;
	else return 0;
}
int main()
{
	int n, k,k1,j=0;
	stu a[5001],a1[5001];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].x >> a[i].y;
	}
	sort(a, a + n, pi);
	k1 = k * 1.5;
	for (int i = 0; i < n; i++)
	{
		if (a[i].y >= a[k1 - 1].y)
		{
			a1[j] = a[i]; j++;
		}
	}
	sort(a1, a1 + j, pi);
	cout << a[k1 - 1].y << " " << j << endl;
	for (int i = 0; i < j; i++)
	{
		cout << a1[i].x << " " << a1[i].y << endl;
	}

		return 0;
}