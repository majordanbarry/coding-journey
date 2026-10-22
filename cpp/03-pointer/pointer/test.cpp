#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	int a = 10;
	const int* p = &a; // pointer to integer
	int b = 20;
	p = &b;
	cout << *p << endl; // Output: 20
	int c = 30;
	int* const q = &c;
	*q = 40;
	cout << *q << endl; // Output: 40

	return 0;
}