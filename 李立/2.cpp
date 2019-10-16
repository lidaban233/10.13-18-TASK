#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;scanf("%d",&n);
    int num[n],douhao=0;
    for(int i=0;i<n;i++)scanf("%d",&num[i]);
    sort(num,num+n);
    for(int i=0;i<n;i++)
    {
        if(num[i]%2==1)
        {printf(douhao?",%d":"%d",num[i]);
        douhao++;
        }
    }
     return 0;
}