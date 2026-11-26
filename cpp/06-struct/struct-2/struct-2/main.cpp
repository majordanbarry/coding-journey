#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct hero {
	string name;
	int age;
	bool gender;
};
void bubblesort(hero harr[], int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0;j < len - 1 - i;j++) {
			if (harr[j].age > harr[j + 1].age) {
				hero temp = harr[j];
				harr[j] = harr[j + 1];
				harr[j + 1] = temp;
			}
		}
	}
}
void print1(hero harr[], int len) {
	for (int i = 0;i < len;i++) {
		cout << harr[i].name << " " << harr[i].age << " " << harr[i].gender << endl;
	}
}
int main() {
	hero harr[5] = {
		{"刘备", 23, 1},
		{"关羽", 22, 1},
		{"张飞", 21, 1},
		{"赵云", 20, 1},
		{"貂蝉", 19, 0}
	};
	int len = sizeof(harr) / sizeof(harr[0]);
	bubblesort(harr, len);
	print1(harr, len);
	return 0;
}