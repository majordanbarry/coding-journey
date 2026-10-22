#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int num = 0;
	printf("%s", "which number?");
	scanf("%d", &num);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == num)
		{
			printf("%s","find!\n");
			return 0;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	printf("%s","failed!\n");

	return 0;
}