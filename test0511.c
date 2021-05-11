//字符串逆序（写一个函数，可以逆序一个字符串的内容。）

////7. 编写一个程序数一下1-100的所有整数中9的个数
////程序分析：取出这个数字的个位和十位，分别判断一下是不是9
////个位：num%10  十位： num/10
//#include<stdio.h>
//#include<stdlib.h>
//
//int nineCount() {
//	int count = 0;
//	for (int i = 1;i < 100;i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	printf("%d ", nineCount());
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int nineCount() {
//	int count = 0;
//	for (int i = 1;i < 100;i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	return count;
//}
//
//int main() {
//	printf("%d ", nineCount());
//	system("pause");
//	return 0;
//}
//
////8. 分数求和（计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果）
////程序分析：分奇数项和偶数项判断 加奇数项 减偶数项
////注意！！分数也就是小数，用double类型  输出用%f
//#include<stdio.h>
//#include<stdlib.h>
//
//double fenshuqiuhe() {//这个函数用来判断奇数项和偶数项，并求和
//	double sum = 0.0f;//注意！！此时为小数形式
//	for (int i = 1;i <=100;i++) {//注意！！i可以=100
//		if (i % 2 == 1) {//注意！！这一步是判断是不是奇数项！！！
//			//如果该数除以2余1时，就说明他是奇数项！！
//			sum += 1.0 / i;
//		}
//		else {//反之，则是偶数项
//			sum -= 1.0 / i;
//		}
//	}
//	return sum;
//
//	
//}
//
//int main() {
//	printf("%f\n", fenshuqiuhe());//注意！！小数输出用%f
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//double fenshuqiuhe() {
//	double sum = 0.0f;
//	for (int i = 1;i <= 100;i++) {
//		if (i % 2 == 1) {
//			sum += 1.0 / i;
//		}
//		else {
//			sum -= 1.0 / i;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	printf("%f\n", fenshuqiuhe());
//	system("pause");
//	return 0;
//}

////9. 求最大值（求10 个整数中最大值）
////程序分析：求最大值，用“打擂台”方法！！数组
//#include<stdio.h>
//#include<stdlib.h>
//
//int getMax(int arr[], int size) {//创建数组时要指定数组长度，否则会隐式转成指针
//	int maxNum =arr[0];//定义一个数组变量用来保存最后得到的值
//	for (int i = 1;i < size;i++) {
//		if (arr[i] > maxNum) {
//			maxNum = arr[i];
//		}
//	}
//	return maxNum;
//}
//
//
//int main() {
//	int arr[] = { 1,2,3,9,8,7,5,4,10,6 };//定义一个数组并初始化
//	int size = sizeof(arr) / sizeof(arr[0]);//求出数组长度
//	int result = getMax(arr,size);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int getMax(int arr[], int size) {
//	int maxNum = arr[0];
//	for (int i = 1;i < size;i++) {
//		if (arr[i] > maxNum) {
//			maxNum = arr[i];
//		}
//	}
//	return maxNum;
//}
//
//int main() {
//	int arr[] = { 1,5,6,72,88,99,14,15,16,21};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int result = getMax(arr, size);
//	printf("%d\n", result);//创建函数之前先求出数组长度，否则后面无法求出
//	system("pause");
//	return 0;
//}


////10.输出9*9乘法表
////程序分析：找规律：
////一行一行打印
//// 1.一共9行
//// 2.第i行打印i列
//// 3.%d*%d=%d 第row行打印col列 col*row
//#include<stdio.h>
//#include<stdlib.h>
//
//int printMultiply(int num) {
//	for (int row = 1;row <= num;row++) {
//		for (int col = 1;col <= row;col++) {
//			printf("%d*%d=%d  ", col, row, col * row);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	printMultiply(9);
//	system("pause");
//	return 0;
//}



//11. 猜数字游戏
//程序分析
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game() {//创建一个函数用来表示这个游戏
	printf("开始一局猜数字游戏\n");
	//1.先生成一个[1，100]的随机整数
	int toGuess = rand() % 100 + 1;
	//2.提示用户进行交互
	while (1) {
		printf("请输入一个整数[1,100]:");
		int inputNum = 0;
		scanf("%d", &inputNum);
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
	//创建一个用来和用户交互的菜单
	int menu() {
		printf("===================\n");
		printf("欢迎来到猜数字游戏！");
		printf("1.开始游戏\n");
		printf("0.退出游戏\n");
		printf("===================\n");
		printf("请输入你的选择:");
		int choice = 0;
		scanf("%d", &choice);
		return choice;

	}



int main() {
	srand((unsigned int)time(0));
	//只要让每次运行程序的时候，设置的随机种子不一样
	//时间戳
	//使用time（0）获取到当前的时间戳
	//加上一个可以和用户交互的菜单
	while (1) {
		int choice = menu();
		if (choice == 1) {//输入1表示游戏开始
			game();
		}
		else if (choice = 0) {//输入0表示游戏结束
			printf("goodbye!\n");
			break;
		}
		else {
			printf("您的输入有误！\n");
		}
	}
	game();
	system("pause");
	return 0;
}
