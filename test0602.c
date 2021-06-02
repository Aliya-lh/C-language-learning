////有问题！！待解决！！
////打印0~100000之间所有的水仙花数并输出
////1.先判定这个数字是几位数
////2.取出这个整数中的每一位，并且进行求n次方操作
////3.求和并且进行判定
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int calcDecimalCount(int num) {//判定是几位数
//	int count = 0;
//	while (num != 0) {
//		num /= 10;
//		count++;
//	}
//	return count;
//}
//
//
//int isShuiXian(int num) {
//	int oldNum = num;//记录一下最初的num的值
//	int n = calcDecimalCount(num);
//	//取出每一位并求和
//	int sum = 0;
//	while (num != 0) {
//		int tmp = num % 10;
//		num /= 10;
//		sum += (int)pow(tmp, n);
//	}
//	//判定一下是否是水仙花数
//	if (sum == oldNum) {
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	for (int i = 1;i <= 100000;i++) {
//		if (isShuiXian(i)) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}


//打印菱形
//程序分析：这类题都是找规律！一行一行打印 行号和每一行打印的东西
//把菱形分为三个部分 上三角 + 横线 + 下三角 
//需要找到行号 空格/星号之间的关系即可
//第一行 6个空格 1个*
//第二行 5个空格 3个*
//第三行 4个空格 5个*
//第四行 3个空格 7个*
//第i行 （7-i）个空格  （2*i-1） 个*
//上三角一共打印6行，循环6次
#include<stdio.h>

void printLine(int starCount, int spaceCount) {
	for (int i = 0;i < spaceCount;i++) {//先打印空格
		printf(" ");
	}
	for (int i = 0;i < starCount;i++) {//再打印星号
		printf("*");
	}
	printf("\n");
}

void printLingXing() {
	//1.先打印上三角
	for (int row = 1;row <= 6;row++) {
		printLine(2 * row - 1, 7 - row);
	}
	//2.打印中间的线
	printLine(13, 0);
	//3.最后打印下三角，就把上三角的打印过程给反过来
	for (int row = 6;row >= 1;row--) {
		printLine(2 * row - 1, 7 - row);
	}
	
}

int main() {
	printLingXing();
	return 0;
}