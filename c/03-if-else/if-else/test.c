#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
int main() {
	///*int a = 10;
	//int b = (a == 10 ? 1 : 0);
	//printf("%d", b);*/
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d %d", &a, &b);
	max = (a > b ? a : b);
	printf("%d\n", max);
	srand((unsigned int)time(NULL));
	int s=rand();
	printf("%d", s);
	return 0;
}