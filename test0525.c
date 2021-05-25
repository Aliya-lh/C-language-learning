//struct A {
//	int id;
//};
//struct B {
//	struct A a;
//};
//struct C {
//	struct B* b;
//};
//int main() {
//	struct C c;
//	c.b->a.id;
//}

//29. 求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299 输出例子 : 7
//#include<stdio.h>
//#include<stdlib.h>
//
//int bitDiffCount(int a, int b) {
//	//1.先把a^b
//	int tmp = a ^ b;
//	//2.统计结果中，1的个数即可
//	int count = 0;
//	for (int i = 0;i < 32;i++) {
//		if (tmp & (1 << i)) {
//			count++;
//		}
//	}
//	return count;
//}
//
//int main() {
//	printf("%d\n", bitDiffCount(1999, 2299));
//	system("pause");
//	return 0;
//}


//30. 打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//程序分析：二进制序列在计算机中的存储位有32位
//利用移位和与操作符来实现
//把要打印的那一位和1相与，结果就是它本身
//通过移位操作让要打印的位数和1相与就能把这一位成功打印到屏幕上了
#include<stdio.h>
#include<stdlib.h>
void getBits(int num) {
	//注意，当前约定最右边这一位为第0位
	for (int i = 1;i < 32;i += 2) {
		if (num & (1 << i)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
	//再取所有的偶数位
	for (int i = 0;i < 32;i += 2) {
		if (num & (1 << i)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
}

int main() {
	getBits(99);
	system("pause");
	return 0;
}