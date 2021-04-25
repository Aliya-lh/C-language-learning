////实现一个函数，判断一个数是不是素数。
////利用上面实现的函数打印100到200之间的素数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int primeNum(int num) {
//	int i, tmp;
//	tmp = sqrt(num);
//	for (int tmp = 100;tmp <= 200;tmp++) {
//		int i = 0;
//		for (i = 2;i <= tmp;i++) {
//			if (num % i == 0) {
//				return 0;
//			}
//			return 1;
//		}
//	}
//}
////主函数
//int main() {
//	int i;//调用找素数函数
//	scanf("%d", &i);
//	if (primeNum(i)) {
//		printf("是素数");
//	}
//	else {
//		printf("不是素数");
//
//	}
//	system("pause");
//	return 0;
//
//}


////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int chengFa(int num) {
//	for (int  i= 1; i<= num;i++) {
//		for (int k = 1;k <= i; k++) {
//			printf("%d*%d=%d", i, k, i * k);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	chengFa(n);
//	return 0;
//
//}
//
////递归方式实现打印一个整数的每一位
////输入5678 输出5 6 7 8
// #include<stdio.h>
//void printNum(unsigned int num) {
//	if (num > 9) {
//		printNum(num / 10);
//	}
//	printf("%d", num % 10);
//}
//int main() {
//	printNum(5678);
//
//}

//
////递归和非递归分别实现strlen
////递归方法
//#include<stdio.h>
//int myStrlen(char* str) {
//	if (str[0] == '\0') {//说明没有合法字符在里面
//		return 0;
//	}
//	return 1 + myStrlen(str + 1);
//}
//int main() {
//	printf("%d\n", myStrlen("abcd"));
//	return 0;
//}

////非递归 循环
//#include<stdio.h>
//int myStrlen(char str[]) {
//	int count = 0;
//	while (str[count] != '\0') {
//		count++;
//	}
//	return count;
//}
//int main() {
//	printf("%d\n", myStrlen("abcd"));
//}


////编写一个函数 reverse_string(char* string)（递归实现）
////实现：将参数字符串中的字符反向排列，不是逆序打印。
////要求：不能使用C函数库中的字符串操作函数。
////比如：
////char arr[] = "abcdef";
////逆序之后数组的内容变成：fedcba
////算法思想：以"abcdef"为例
////第一步 将a保存到temp中
////第二步 将f放到a的位置
////第三步 f处填写'\0'
////第四步 计算bcde的长度 如果bcde的长度大于1，则逆序
////第五步 将a放到f的位置
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(char* str);
//int main(void) {
//	char str[100];
//
//	printf("请输入你想查询的字符串\n");
//	scanf("%s", str);
//	print(str);
//	printf("\n");
//	return 0;
//}
//
//void print(char* str) {
//	char c = *str;
//	if (c != '\0') 
//		print(str + 1);
//	if (c != '\0') 
//		printf("%c", c);
//	}
//



////计算一个数的每位之和（递归实现）
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//#include<stdio.h>
//int DigitSum(int x) {
//	if (x > 9) {
//		return x % 10 + DigitSum(x / 10);
//	}
//	else {
//		return x;
//	}
//}
//int main() {
//	int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//
//}
//


////编写一个函数实现n的k次方，使用递归实现。
////程序分析：
//// k=0时，n^k=1;
////k!=0时，n*(n^(k-1))
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int power(int n,int k) {
//	if (k <= 0) {
//		return 1;
//	}
//	return n * power(n,k - 1);
//	}
//int main() {
//	int n;
//	int k;
//	scanf("%d%d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//完成三子棋游戏代码
#include<stdio.h>
int main() {

}

//二维数组的使用
int main() {
	//内存中的残留值
	/*int arr[3][4] = { 1,2,3,4,5 };*/
	/*int arr [3][4] = {
		{1,2},
		{3,4},
		{5}
	};*/
	int arr[3][4] = {
		2,4,5
	};
	for (int row = 0;row < 3;row++) {
    //这个操作相当于取出其中的某一行，这一行也是一个数组
	//arr[row]
		for (int col = 0;col < 4;col++) {
			printf("%d", arr[row][col]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}