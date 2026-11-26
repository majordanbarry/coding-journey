#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student {
	string sname;
	int score=0;
};
struct teacher {
	string tname;
	student sarr[5];
};
void allocate(struct teacher tarr[], int len) {
	string nameseed="ABCDE";
	for (int i = 0;i < len;i++) {
		tarr[i].tname = "teacher_";
		tarr[i].tname += nameseed[i];
		for (int j = 0;j < 5;j++) {
			tarr[i].sarr[j].sname = "student_";
			tarr[i].sarr[j].sname += nameseed[j];
			tarr[i].sarr[j].score = rand() % 61 + 40;
		}
	}
}
void printinfo(struct teacher tarr[], int len) {
	for (int i = 0;i < len;i++) {
		cout << tarr[i].tname << endl;
		for (int j = 0;j < 5;j++) {
			cout << "\t" << tarr[i].sarr[j].sname << " " << tarr[i].sarr[j].score << endl;
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));
	teacher tarr[3];
	int len = sizeof(tarr) / sizeof(tarr[0]);
	allocate(tarr, len);
	printinfo(tarr, len);
	return 0;
}