//
//判断一个数是不是素数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int prime(int n) {
//	int i;
//	if (n < 2) {
//		printf("%d不是素数", n);
//	}
//	else {
//		for (i = 2;i < n;i++) {//判断n在2~n-1中有没有因数
//			if (n % i == 0)//如果用可以除尽的数，则非素数
//				break;
//		}
//	}if (i < n) {//在2~n-1之间有素数
//		printf("%d不是素数\n", n);
//	}
//	else
//		printf("%d是素数\n", n);
//
//	return 0;
//}
//
//
//int main() {
//	int n;
//	printf("请输入一个数：\n");
//	scanf("%d", &n);
//	prime(n);
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//









//猜数字游戏
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void表示函数没有返回值
//使用这个函数表示一局游戏
void game() {
	printf("开始一局猜数字游戏\n");
	//1.先生成一个[1，100]的随机整数
	int toGuess = rand() % 100 + 1;
	//2.提示用户进行交互
	while (1) {
		printf("请输入一个整数[1,100]:");
		int inputNum = 0;
		scanf("%d",&inputNum);
		if (inputNum < toGuess) {
			printf("低了！\n");
		}
		else if (inputNum > toGuess) {
			printf("高了！\n");
		}
		else {
			printf("猜对了！\n");
			break;
		}
	}
}
int menu() {
	printf("=================\n");
	printf("欢迎来到猜数字游戏！");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("=================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;


}

int main() {
	srand((unsigned int )time(0));
	//只要让每次运行程序的时候，设置的随机种子不一样
	//时间
	//使用time(0)获取到当前的时间戳                                                                                                         
	//game();
	//加上一个和用户交互的菜单
	while (1) {
		int choice = menu();
		if (choice == 1) {
			game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}else{
				printf("您的输入有误！\n");
		}
	}
	system("pause");
	return 0;
}
//
//
//

// 二分查找
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
//#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中的元素
//	
//	int left = 0;//数组最左边数的下标
//	int right = sz - 1;//数组最右边数的下标
//
//	while (left <= right)//防止交叉
//	{
//		int mid = (left + right) / 2;//mid是中间数的下标
//		if (arr[mid] > k) {
//			right = mid - 1;//中间数在k右边，查找范围变为最左边的数和中间数前一个数之间
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;//中间数在k的左边，查找范围变为中间数后一个数与最右边的数之间
//		}
//		else {
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)//左大于右，即交叉
//	{
//		printf("找不到！\n");
//	}
//	return 0;
//
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归方法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Sum(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return Sum(n - 1) * n;
//	}
//}
//int main()
//{
//	printf("%d\n", Sum(4));
//	system("pause");
//	return 0;
//}

////非递归方法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int m = 1;
//	int n = 1;
//	int i = 1;
//	printf("请输出一个整数！\n");
//	scanf_s("%d", &n);
//	for (i = 1;i <= n;++i) {
//		m = m * i;
//	}
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}

//递归和非递归分别实现strlen





	















//在屏幕上输出9*9乘法口诀表
//#include<stdio.h>
//int main() {
//	int i, j, result;
//	printf("\n");
//	for (i = 1;i < 10;i++) {
//		for (j = 1;j <= i;j++) {
//			result = i * j;
//			printf("%d*%d=%-3d",i,j, result);//-3d表示左对齐，占三位
//		}
//		printf("\n");
//		
//	}
//}


//求10 个整数中最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a[11];
//	printf("请输入10个整数：\n");
//		for (int i = 1;i <= 10;i++) {
//			scanf("%d", &a[i]);
//		}
//		a[0] = a[1];
//	for (int i = 1;i <= 10;i++) {
//		if (a[i] >= a[0])
//			a[0] = a[i];
//		
//	}
//
//printf("%d\n",a[0]);
//system("pause");
//return 0;
//}
