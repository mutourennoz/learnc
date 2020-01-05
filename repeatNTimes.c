#include <stdio.h>
int repeatNTimes(int a[],int b);

int main()
{
	int a[5];
	int b;
	printf("Please input the numbers:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=repeatNTimes(a[5],b);

}

int repeatNTimes(int a[],int b)
{
	int j=0;
	for(int i=0;i<5;i++){
		if(a[i]==a[i+1])
			j++;

	}
	return j;
}
