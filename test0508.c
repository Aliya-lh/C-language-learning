//作业题
//求两个数的较大值
#include <stdio.h>
#include <stdlib.h>

int maxNum(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}
//或者使用三目运算符
int maxNum(int x, int y) {
	return x > y ? x : y;
}

int main() {
	system("pause");
	return 0;
}

//将三个整数从大到小输出
#include <stdio.h>
#include<stdlib.h>

void swap(int* x, int* y) {//创建一个用来交换的函数swap
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void func() {//创建函数用来比较三个数大小
	int a = 10;
	int b = 30;
	int c = 20;
	// 1. 先拿a和b比较一下
	// 如果a<b,就交换两个数字
	//目的是让a的值始终大于b
	if (a < b) {
		swap(&a, &b);
	}
	//2.再拿a和c比较
	//如果a<c，就交换两个数字
	//目的是让a的值始终比c大
	if (a < c) {
		swap(&a, &c);
	}
	//a中存的就是3个数的最大值
	printf("%d\n", a);
	//3.再比较一下b和c，谁大就先输出谁
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

}

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

}

//打印3的倍数（写一个代码打印1-100之间所有3的倍数的数字
#include<stdio.h>
#include<stdlib.h>

void print3() {
	for (int i = 1;i <= 100;i++) {// 前闭后开写法只是建议，采取合适、舒服的写法
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
}
int main() {
	print3();
	system("pause");

}

//打印3的倍数（写一个代码打印1-100之间所有3的倍数的数字
#include<stdio.h>
#include<stdlib.h>

//创建函数表示
void print3() {
	for (int i = 1;i <= 100;i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
}

int main() {
	print3();
	system("pause");

}

//找出最大公约数
//约数 因数 因子
//6除以2等于3 6除以1等于6 8除以2等于4 8除以1等于8 
// 所以2为6和8的最大公约数
//2×3=6 2和3为6的因数
//6除以2等于3 则2就为6的因数

//程序分析：采用暴力求解！！
//如果给定x和y，最大公约数一定出现在[1，min(x，y)]之间
//6和8的最大公约数一定出现在1-6之间~
#include<stdio.h>
#include<stdlib.h>

int maxGongYueShu(int x, int y) {
	int min = x < y ? x : y;//采用三目运算符判断
	int result = 1;
	for (int i = 1;i <= min;i++) {//判断最大公约数一定出现在[1，min(x，y)]之间
		if (x % i == 0 && y % i == 0) {
			//i就是x y的公约数
			result = i;//由于i++，所以每运算一次，得到的新的i肯定比旧的大
		 //不需要记住所有的公约数，只要能找到最大的即可（只需要返回最后的一个即为最大的）
		}
	}
	return result;//当我们函数返回，得到的result就是最大公约数
}
int main() {
	printf("%d\n", maxGongYueShu(100, 120));
	system("pause");
	return 0;
}

//找最大公约数
#include<stdio.h>
#include<stdlib.h>
 
int maxGongYueShu(int x, int y) {
	int min = x < y ? x : y;
	int result = 1;
	for (int i = 1;i <= min;i++) {
		if (x % i == 0 && y % i == 0) {
			result =i;
		}
	}
	return result;
}

int main() {
	printf("%d\n", maxGongYueShu(100, 120));
	system("pause");
	return 0;
}

//编写一个程序数一下1-100的所有整数中9的个数
//思路：以9结尾的数：9 19 29 39 49 59 69 79 89
//9作为十位的数：91 92 93 94 95 96 97 98
//特殊的99里面有两个9
// 共20个
//程序分析：取出这个数字的个位和十位，分别判断一下看是不是9即可~
//取出个位：num % 10  取出十位：num/10 取出百位：num/100
#include<stdio.h>
#include<stdlib.h>

int nineCount() {
	int count = 0;
	for (int i = 1;i <= 100;i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	return count;
}


int main() {
	printf("%d\n", nineCount());
	system("pause");
	return 0;
}

//编写一个程序数一下1-100的所有整数中9的个数
#include<stdio.h>
#include<stdlib.h>

int nineCount() {
	int count = 0;
	for (int i = 1;i <= 100;i++) {
		if (i % 10 == 9) {//注意判断个位和十位要分别判断
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	return count;
}

int main() {
	printf("%d\n", nineCount());
	system("pause");
	return 0;
}


//分数求和
//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
//程序分析

#include<stdio.h>
#include<stdlib.h>

double fenshuqiuhe() {
	double sum = 0.0f;
	for (int i = 1;i <= 100;i++) {
		if (i % 2 == 1) {//奇数项
			sum += 1.0 / i;
		}
		else {
			//偶数项
			sum -= 1.0 / i;
		}
	}
	return sum;
}


int main() {
	printf("%f\n", fenshuqiuhe());
	system("pause");
	return 0;
}

//分数求和
// 计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
#include<stdio.h>
#include<stdlib.h>

double fenshuqiuhe() {
	double sum = 0.0f;
	for (int i = 1;i <= 100;i++) {
		if (i % 2 ==1) {
			sum += 1.0 / i;
		}
		else {
			sum -= 1.0 / i;
		}
	}
	return sum;
}
int main() {
	printf("%f\n", fenshuqiuhe());
	system("pause");
	return 0;
}

//求最大值
//程序分析：使用“打擂台”方法
#include<stdio.h>
#include<stdlib.h>

int getMax(int arr[], int size) {
	int maxNum = arr[0];
	for (int i = 1;i < size;i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}
	return maxNum;
}

int main() {
	int arr[] = { 9,5,2,7,3,6,8,12,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int result=getMax(arr, size);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}

//求最大值
//应用数组
#include<stdio.h>
#include<stdlib.h>

int getMax(int arr[], int size) {
	int maxNum = arr[0];
	for (int i = 1;i < size;i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}
	return maxNum;
}

int main() {
	int arr[] = { 9,5,2,7,3,6,8,12,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = getMax(arr, size);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}

//输出乘法口诀表
// 以行号为变量，研究每一行打印的内容和行号之间的规律是什么~
// 找规律~~一行一行打印
// 1.一共打印9行
// 2.第i行打印i列
// 3.针对第row行，第col列，打印的内容就是col*row
// 列×行
#include<stdio.h>
#include<stdlib.h>

int printMultiply() {
	for (int row = 1;row <= 9;row++) {
		//第row行要打印row个列
		for (int col = 1;col <= row;col++) {
			printf("%d*%d=%d ", col, row, col * row);
		}
		printf("\n");
	}
}

int main() {
	printMultiply();
	system("pause");
	return 0;
}

//输出12*12乘法口诀表
#include<stdio.h>
#include<stdlib.h>

void printMultiply(int maxRow) {
	for (int row = 1;row <= maxRow;row++) {
		for (int col = 1;col <= row;col++) {
			printf("%d*%d=%d ", col, row, col * row);
		}
		printf("\n");
	}
	
}

int main() {
	printMultiply(12);
	system("pause");
}

