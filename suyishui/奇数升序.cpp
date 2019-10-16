#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[501],ji[501],j=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			ji[j] = a[i]; j++;
		}
	}
	sort(ji, ji + j);
	for (int i = 0; i<j; i++)
	{
		if (i == j-1)cout << ji[i];
		else cout << ji[i] << ",";
	}
	return 0;
}