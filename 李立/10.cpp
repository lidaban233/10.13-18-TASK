#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
typedef struct{char w[50];}word;
bool compare(const word&a,const word&b)
{return strcmp(a.w,b.w)<0;}
int main()
{
word c[100];
int a=0;
do {scanf("%s",&c[a].w);a++;}
while(getchar()!='\n');
sort(c,c+a,compare);
for(int i=0;i<a;i++)
{if(strcmp(c[i+1].w,c[i].w)!=0)
printf("%s\n",c[i].w);}
}
