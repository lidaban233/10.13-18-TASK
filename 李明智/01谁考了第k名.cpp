#include<stdio.h>
int main()
{
	int n,i,j,k,ipos,itempa,a[100];
	float itempb,b[100];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d%f",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++)
	{
		itempb=b[i];
		itempa=a[i];
		ipos=i;
		for(j=i+1;j<n;j++)
		{
			if(b[j]>itempb)
			{
				itempb=b[j];
				itempa=a[j];
				ipos=j;
			}
		}
		b[ipos]=b[i];
		b[i]=itempb;
		a[ipos]=a[i];
		a[i]=itempa;
	}
	printf("%d %g",a[k-1],b[k-1]);
	return 0;
}
