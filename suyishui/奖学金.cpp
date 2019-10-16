#include<bits/stdc++.h>
using namespace std;
struct stu { int xu; int yu; int sh; int yi; int zo; };
bool pi(stu a, stu b)
{
	if (a.zo > b.zo)return 1;
	else if (a.zo == b.zo&&a.yu > b.yu)return 1;
	else if (a.zo == b.zo&&a.yu == b.yu&&a.xu < b.xu)return 1;
	else return 0;
}
int main()
{
	int n;
	stu dd[301];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		dd[i].xu = i + 1;
		cin >> dd[i].yu >> dd[i].sh >> dd[i].yi;
		dd[i].zo = dd[i].yu + dd[i].sh + dd[i].yi;
	}
	sort(dd, dd + n, pi);
	for (int i = 0; i < 5; i++)
	{
		cout << dd[i].xu << " " << dd[i].zo << endl;
	}
	return 0;
}