#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int main(){
	//int arr[5] = { 1,2,3,4,5 };
	//cout << &arr<<" \n"<<&arr[0]<<endl;
	//cout << *arr;
	//size of(arr)指的是整个数组的大小，单位是字节，而不是元素个数
	//&arr[0] arr &arr 结果相同，都是数组首元素的地址
	//区别在于&arr+1一次加的是整个数组的大小，而&arr[0]+1一次加的是一个元素的大小
	//&arr[0]、arr是数组首元素的地址，&arr是整个数组的地址
	//int arr[10] = {0};
	//int* p = arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0;i < sz;i++) {
	//	//*p = i+1;
	//	//p++;
	//	*(p + i) = i + 1;
	//	cout << arr[i] << " ";
	//}
	//arr[i]*(arr+i)==*arr(i+arr)==i[arr]
	//数组 计算机会转换为指针运算，arr[i] = *(arr+i) = *(i+arr) = i[arr]
	int arr[5] = { 1,2,3,4,5 };
	//数组传参本质上是传递指针，数组名就是数组首元素的地址
	//指针数组不用解引用，直接使用数组名即可
	int arr1[5] = { 1,2,3,4,0 };
	int* parr[2] = { arr,arr1 };
	cout<<parr[0][4]<<endl;
	//char* p="hello";
	typedef int(*arr_ptr)[5];
	int (*arr[4])(int, int) = { add,sub };
	//int (*p)[10] = &arr;数组指针
	//int* p[10] = arr;指针数组
	return 0;
}