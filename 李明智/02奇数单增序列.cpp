#include<stdio.h>
int main()
{
	int i,j;
	int n;
	int a[500],b[500];
	int ipos,itemp;
	int h=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		itemp=a[i];
		ipos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<itemp)
			{
				itemp=a[j];
				ipos=j;
			}

		}
		a[ipos]=a[i];
		a[i]=itemp;

	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[h]=a[i];
			h++;
		}

	}
	for(i=0;i<h;i++)
	{
	    if(i<h-1)
		printf("%d,",b[i]);
		else
            printf("%d",b[i]);
	}
	return 0;
}