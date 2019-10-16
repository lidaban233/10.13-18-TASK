#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a[101],b[101];
	char c;
	int i=0,m=0;
	for(;;i++)
	{
		cin >> a[i];
		c = cin.get();
		if (c == '\n')break;//回车停止输出的技巧
	}
	for (int j = 0; j <=i; j++)//对于数组是否有更简单的去重方法？
	{
		for (int k = 0; k <=i; k++)
		{
			if (a[j] == a[k] &&j!=k)
			{
				a[k] = "0";
			}
		}
	}
	for (int l = 0; l<=i;l++)
	{
		if (a[l] != "0")
		{
			b[m] = a[l];
			m++;
		}
	}
	sort(b, b + m);
	for (int l = 0; l <m; l++)
	{
		cout << b[l] << endl;
	}
	return 0;
}