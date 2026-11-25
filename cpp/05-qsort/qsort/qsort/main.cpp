#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int cmp_int(const void* p1, const void* p2) {
	return *(int*)p1 - *(int*)p2;
}
void printarr(int* arr, int sz) {
	for (int i = 0; i < sz; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test1() {
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printarr(arr, sz);
}
struct stu {
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* p1, const void* p2) {
	return (*(struct stu*)p1).age - (*(struct stu*)p2).age;
}
void test2() {
	struct stu arr[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);//ps->name
}
int main() {
	test1();
	
	return 0;
}