#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[101],b[1001],cu,sh=0;
	memset(b, 0, 4004);//注意int实际占用字节！
	memset(a, 0, 404); 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> cu;
		if (b[cu] == 0)
		{
			a[i] = cu;
			b[cu] = 1;
		}
	}
	sort(a, a + 101);
	for (int i = 0; i < 101; i++)
	{
		if (a[i] != 0)sh+=1;
	}
	cout << sh << endl;
	for (int i = 0; i < 101; i++)
	{
		if (a[i] != 0)cout << a[i] << " ";
	}
	return 0;
}