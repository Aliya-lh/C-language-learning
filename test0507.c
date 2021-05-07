////作业题
////求两个数的较大值
//#include <stdio.h>
//#include <stdlib.h>
//
//int maxNum(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	return y;
//}
////或者使用三目运算符
//int maxNum(int x, int y) {
//	return x > y ? x : y;
//}
//
//int main() {
//	system("pause");
//	return 0;
//}

////将三个整数从大到小输出
//#include <stdio.h>
//#include<stdlib.h>
//
//void swap(int* x, int* y) {//创建一个用来交换的函数swap
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//void func() {//创建函数用来比较三个数大小
//	int a = 10;
//	int b = 30;
//	int c = 20;
//	// 1. 先拿a和b比较一下
//	// 如果a<b,就交换两个数字
//	//目的是让a的值始终大于b
//	if (a < b) {
//		swap(&a, &b);
//	}
//	//2.再拿a和c比较
//	//如果a<c，就交换两个数字
//	//目的是让a的值始终比c大
//	if (a < c) {
//		swap(&a, &c);
//	}
//	//a中存的就是3个数的最大值
//	printf("%d\n", a);
//	//3.再比较一下b和c，谁大就先输出谁
//	if (b > c) {
//		printf("%d\n", b);
//		printf("%d\n", c);
//	}
//	else {
//		printf("%d\n", c);
//		printf("%d\n", b);
//	}
//	printf("\n");
//}
//
//int main() {
//	func();
//	system("pause");
//	return 0;
//}

//将三个整数从大到小输出 a=30,b=20,c=10
#include<stdio.h>
#include<stdlib.h>

void swap(int* x,int* y) {//使用指针变量来交换二者的值
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


void func() {
	int a = 10;
	int b = 30;
	int c = 20;
	//1.先比较a和b的大小 
	//如果a<b，就交换a和b的值
	//这是为了确保a的值始终大于b的值
	if (a < b) {
		swap(&a, &b);
	}
	//2.再比较a和c的大小
	// 如果a<c，就交换a和c的值
	//这是为了确保a的值始终大于c的值
	if (a < c) {
		swap(&a, &c);
	}
	printf("%d\n", a);//先输出最大的值a
	//3.再比较b和c的大小
	// 如果b>c，就输出b，c
	// 否则就输出c,b
	if (b > c) {
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else {
		printf("%d\n", c);
		printf("%d\n", b);
	}
	printf("\n");
}

int main() {
	func();
	system("pause");
	return 0;
}