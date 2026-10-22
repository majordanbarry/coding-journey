#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
static void test() {//static修饰函数，使其只能在本文件中使用，不能被其他文件使用
	static int a = 2027;//只改变位置从栈区到静态区而不改变作用域
	a++;
	cout<<"Value of a: " << a << endl;
}
int main() {
	//extern int a; 
	//cout << "Value of a: " << a << endl;
	for (int i = 0; i < 5; i++) {
		test();
	}
	return 0;
}//static有很强的静止意味，函数内使用使之静止，只生效一次，在全局变量前使用，会使之静止在本文件内，不能被其他文件使用
//extern void test(); //声明函数test()，告诉编译器该函数在其他文件中定义
