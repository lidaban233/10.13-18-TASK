#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, i, j, m, n, x = 1, y = 1, b[10001], ou[10001], ji[10001];
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		scanf("%d", &b[i]);
	}
	for (j = 1; j <= a; j++)
	{
		if (b[j] % 2 == 0)
		{
			ou[x] = b[j];
			x++;
		}
		else
		{
			ji[y] = b[j];
			y++;
		}
	}
	sort(ou + 1, ou + x); //注意x、y应该是什么值
	sort(ji + 1, ji + y);
	if (x == 1) { printf(" \n"); }
	else
	{
		for (m = 1; m <= x - 1; m++) 
		{
			if (m == x - 1) 
			{
				printf("%d\n", ou[m]);
			}
			else
			{
				printf("%d ", ou[m]);
			}
		}
	}
	if (y == 1) { printf("\n"); }
	{
		for (n = y - 1; n >= 1; n--) 
		{
			if (n == 1) 
			{
				printf("%d", ji[n]);
			}
			else
			{
				printf("%d ", ji[n]);
			}
		}
	}
	return 0;
}