//#include<stdio.h>
//int main() {
//	int num1 = 50;
//	num1 += -1;
//	printf("%d\n", num1);
//	printf("50%%\n");//百分号%%
//	printf("%5d\n", 123);
//	printf("%-5d\n", 123);
//	////%f默认小数点后打印6位
//	//%+d总是显示正负号，.2f四舍五入两位小数，10.2f最少十位，保留两位小数，向右对齐，
//	// %*.*f,6,2后指定
//	printf("%12f\n", 12.3);
//	printf("%.3s\n", "xiaomaomi");
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int num2=0;
//	int num1 = 0;
//	scanf("%d%*c%d", &num2,&num1);
//	printf("%d %d", num2,num1);//回车，空格不影响读取数据
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    long int b;
    float c=1.2f;
    char num;
    char str[100];
    scanf("%d%ld%f%c%s", &a, &b, &c, &num, str);
    printf("%d\n%ld\n%.1f\n%c\n%s\n", a, b, c, num, str);
    return 0;
}