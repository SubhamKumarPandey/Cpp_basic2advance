#include<stdio.h>
#define MAX 10
int main()
{
	int arr1[MAX],arr2[MAX];
	int b;
	b=10;
	int n=MAX;
	int i,j;
	j=10;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		if(arr1[i]%b==0)
		arr2[j++]=arr1[i];
	}
	for(i=0;i<j;i++)
	printf("%d",arr2[i]);
}
