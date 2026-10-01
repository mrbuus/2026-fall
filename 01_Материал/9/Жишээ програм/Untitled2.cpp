#include <stdio.h>
#include <stdlib.h>
#define N 20
main(){
	double a[N];
	int i;
	for(i=0;i<N;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	for(i=N-1;i>=9;i--)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	system("pause");
	return 0;
}
