//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int num = 0x11223344;
//	//char str[] = "abc";//该数组占4个字节
//	system("pause");
//	return 0;

////设计一个小程序，来判断当前机器的字节序
//
//#include<stdio.h>
//#include<stdlib.h>
////如果是大端字节序，就返回1，否则返回0
//int isBigEnd() {
//	int num = 0x11223344;
//	int* p = &num;
//	//这个指针之间的强制类型转换，不影响指针内部存储的地址值
//	//只影响后续解引用代码对这个地址的内存的长度的理解
//	char* p2 = (char*)p;
//	if (*p2 == 0x11) {
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	printf("%d\n", isBigEnd());
//	system("pause");
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//
//	system("pause");
//	return 0;
//}

////计算求和
//// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//// 例如：2+22+222+2222+22222
//#include<stdio.h>
//#include<stdlib.h>
//void func() {
//	int sum = 0;
//	//接下来需要能够控制这个循环
//	// cur表示当前的某一项
//	int cur = 0;
//	for (int i = 1;i <= 5;i++) {
//		cur = cur * 10 + 2;
//		sum += cur;
//	}
//	printf("sum=%d\n", sum);
//}
//
//int main() {
//	func();
//	system("pause");
//	return 0;
//}


//打印0~100000之间所有的水仙花数并输出
//1.先判定这个数字是几位数
//2.取出这个整数中的每一位，并且进行求n次方操作
//3.求和并且进行判定
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calcDecimalCount(int num) {//判定是几位数
	int count = 0;
	while (num != 0) {
		num /= 10;
		count++;
	}
	return count;
}


int isShuiXian(int num) {
	int oldNum = num;//记录一下最初的num的值
	int n = calcDecimalCount(num);
	//取出每一位并求和
	int sum = 0;
	while (num != 0) {
		int tmp = num % 10;
		sum += pow(tmp, n);
	}
	//判定一下是否是水仙花数
	if (sum == oldNum) {
		return 1;
	}
	return 0;
}

int main() {
	for (int i = 1;i <= 100000;i++) {
		if (isShuiXian(i)) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}