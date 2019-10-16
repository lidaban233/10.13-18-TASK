#include<bits/stdc++.h>
using namespace std;
struct stu { string x; float y; };
int main()
{
	int n, b = 0, c = 0;
	float nv[41], nan[41];
	stu a[41];//此处应可以简洁处理
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].x >> a[i].y;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i].x == "female")
		{
			nv[b] = a[i].y;
			b++;
		}
		else if (a[i].x == "male")
		{
			nan[c] = a[i].y;
			c++;
		}
	}
	sort(nv, nv + b);
	sort(nan, nan + c);
	for (int i = 0; i < c; i++)
	{
		if(c!=0)printf("%.2f ",nan[i]);
	}
	for (int i = b - 1; i >= 0; i--)
	{
		if (b != 0)printf("%.2f ", nv[i]);
	}
	return 0;
}