////编程题目练习汇总
////1.写一个函数求两个整数的较大值
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxNum(int x, int y) {
//	return (x > y) ?x: y;//使用三目运算符
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = maxNum(a,b);//函数调用完毕，ret用于接收Max的返回值
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxNum(int x,int y) {
//	if (x > y) {
//		return x;
//	}return y;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", maxNum(a,b));
//	system("pause");
//	return 0;
//}

////2.写代码将三个整数按从大到小输出
//#include<stdio.h>
//#include<stdlib.h>
//
////创建一个函数用来交换
//void swap(int* x,int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//
////创建一个函数用来比较大小
//void func() {
//	int a = 10;
//	int b = 30;
//	int c = 20;
//	if (a < b) {
//		swap(&a, &b);
//	}
//	if (a < c) {
//		swap(&a, &c);
//	}
//	printf("%d ", a);
//	if (b > c) {
//		printf("%d ", b);
//		printf("%d ", c);
//	}
//	else {
//		printf("%d ", c);
//		printf("%d ", b);
//	}
//
//}
//
//
//int main() {
//	func();
//	system("pause");
//	
//}


////3.打印3的倍数
////程序分析：3的倍数一定能整除3，所以判断 i%3==0 是否成立
//#include<stdio.h>
//#include<stdlib.h>
//
//void print3() {
//	for (int i = 1;i <= 100;i++) {//使用一个循环
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//}
//
//int main() {
//	print3();
//	system("pause");
//}


////4.给定两个数，求这两个数的最大公约数
////例如：输入：20 40 输出：20
////程序分析：最大公约数一定在[1，min（x,y)]范围内
////方法：暴力求解！一个一个试！
////能被两个数同时整除就是公约数
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxGongYueShu(int x,int y) {
//	//采用三目运算符判断两个数中较小数min
//	int min = (x < y) ? x : y;
//	int result = 1;
//	for (int i = 1;i <=min ;i++) {
//		if (x%i == 0 && y%i == 0) {
//			//注意这一步！！是x%i 不是i%x！！！比如：3%2=1
//			result = i;//将i的值赋给result
//		}
//	}
//	return result;
//}
//
//int main() {
//	printf("%d\n", maxGongYueShu(100,120));
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxGongYueShu(int x, int y) {
//	int min = (x < y) ? x : y;
//	int result = 1;
//	for (int i = 1;i <= min;i++) {
//		if (x % i == 0 && y % i == 0) {
//			result = i;
//		}
//	}return result;
//}
//
//int main() {
//	printf("%d", maxGongYueShu(100, 120));
//	system("pause");
//	return 0;
//}


////5. 打印闰年（打印1000-2000年之间的闰年）
////程序分析：普通闰年：不能被100整除，但能被4整除
////世纪闰年：能被100整除，也能被400整除
////方法：先判断能不能被100整除
//#include<stdio.h>
//#include<stdlib.h>
////用函数调用方式
//void year_run() {
//	for (int year = 1000;year <= 2000;year++) {
//		if (year % 4 == 0) {
//			if (year % 100 != 0) {
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0) {
//			printf("%d ", year);
//		}
//	}
//}
//
//int main() {
//	year_run();
//	system("pause");
//}

////用循环方式
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	for (int year = 1000;year <= 2000;year++) {
//		if (year % 4 == 0) {//能被4整除但不能被100整除是普通闰年
//			if (year % 100 != 0) {
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0) {
//			//每400年再闰一次，这是世纪闰年
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}


////6. 打印素数（写一个代码：打印100-200之间的素数）
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int count = 0;
//	for (int i = 101;i <= 200;i++) {
//		for (int k = 2;k < i;k++) {
//			if (i % k == 0) {
//				break;
//			}
//		}
//		if (k == i) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


