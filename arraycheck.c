#include<stdio.h>
 int main()
{
	int a[50],i,n,large,small;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	large=small=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>large)
			large=a[i];
		if(a[i]<small)
			small=a[i];
	}
	
	printf("%d\t%d\t",small,large);
 
	return 0;
}
