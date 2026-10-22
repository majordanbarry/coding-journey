#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main() {
	//int num[5];
	//int text=sizeof(num)/sizeof(num[0]);
	//printf("The size of the array is: %d\n", text);
	//int arr1[3][5] = { 1,2,3,4,5,6 };//行可以不写，列必须写
	//int i = 0;
	//for (i = 0;i < 3;i++) {
	//	int j = 0;
	//	for(j=0;j < 5;j++) {
	//		printf("%p\n", &arr1[i][j]);
	//	}
	//}
	//int n = 0;
	//scanf("%d", &n);
	//int arr[n];
	char str[] = "welcome to bit";
	char arr[] = "##############";
	int left = 0;
	int right = strlen(str) - 1;
	while(left <= right) {
		arr[left] = str[left];
		arr[right] = str[right];
		printf("%s", arr);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s", arr);
}