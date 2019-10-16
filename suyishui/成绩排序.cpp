#include<bits/stdc++.h>
using namespace std;
struct stu { string na; int fe; };
bool pi(stu a, stu b)
{
	if (a.fe > b.fe)return 1;
	if (a.fe == b.fe&&a.na < b.na)return 1;
	else return 0;
}
int main()
{
	int n; 
	stu dd[21];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> dd[i].na >> dd[i].fe;
	}
	sort(dd, dd + n, pi);
	for (int i = 0; i < n; i++)
	{
		cout<<dd[i].na <<" "<< dd[i].fe;
	}

	return 0;
}