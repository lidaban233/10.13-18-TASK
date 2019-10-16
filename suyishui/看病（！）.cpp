#include<bits/stdc++.h>
using namespace std;
struct pat { string id; int age; int que; };//整型类会自动省略前置的0，注意。
bool lao(pat a, pat b)
{
	if (a.age > b.age)return 1;
	else if (a.age == b.age&&a.que < b.que)return 1;
	else return 0;
}
bool fei(pat a, pat b)
{
	return a.que < b.que;
}
int main()
{
	int n;
	pat dd[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		dd[i].que = i;
		cin >> dd[i].id >> dd[i].age;
	}
	sort(dd, dd + n, lao);
	for (int i = 0; i < n; i++)
	{
		if (dd[i].age >= 60)cout<<dd[i].id<<endl;
	}
	sort(dd, dd + n, fei);
    for (int i = 0; i < n; i++)
		{
			if (dd[i].age < 60)cout << dd[i].id << endl;
		}
	return 0;
}