#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct student
{
    int score;
    string name;
}a[21];
int score_comp(const student &a,const student &b)
{
    if(a.score>b.score) return 1;
    if(a.score<b.score) return 0;
    if(a.name<b.name) return 1;
    return 0;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].name;
        cin>>a[i].score;
    }    
    sort(a+1,a+n+1,score_comp);
    for(int i=1;i<=n;i++)
     {
         cout<<a[i].name<<' ';
         cout<<a[i].score<<endl;
     }
     return 0;
}