#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
#define ROW 3
#define COL 2

int func(int * arr)
{
	int sum = 0;
	for (int i=0; i<ROW*COL;i++)
	{
		sum += *(arr + i);
	}
	return sum;
}

int main()
{

	int arr[3][2] = { {1,2},{3,4},{6,7} };
	int x = func(arr);
	printf("%d ", x);
	
}
