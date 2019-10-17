#include<stdio.h>
#include <algorithm>
using namespace std;

int cmp(int a,int b)
{
    return a>b;

}
int main()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    sort(a,a+10,cmp);
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);
    }
    for(i=9;i>=0;i--)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
    return 0;
}