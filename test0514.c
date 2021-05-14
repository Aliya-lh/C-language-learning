////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，
////其各位数字的n次方之和确好等于该数本身，
////如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int i, x, y, z;
//	for (i = 100;i < 1000;i++) {
//		x = i % 10;//求出个位数字
//		y = i / 10 % 10;//求出十位数字
//		z = i / 100 % 10;//求出百位数字
//		if (i == (x * x * x + y * y * y + z * z * z)) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

////用函数方法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int shuixianhuaNum(int num) {
//	int a, b, c, result = 0;
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100 % 10;
//	if (num = a * a * a + b * b * b + c * c * c) {
//		result = 1;
//
//	}
//	return result;
//}
//
//int main() {
//	int i, m, n, a;
//	scanf("%d%d", &m, &n);
//	for (i = m;i < n;i++) {
//		a = shuixianhuaNum(i);
//		if (a) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

////打印菱形
////程序分析：规律：由键盘输入正数n（n<30)，行数为2*（n+1）
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0;i < line;i++) {
//		//打印一行
//		//打印空格
//		int k = 0;
//		for (k = 0;k < line - 1 - i;k++) {
//			printf(" ");
//		}
//		//打印*
//		for (k = 0;k < 2 * i + 1;k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下半部分
//	for (i = 0;i < line - 1;i++) {
//		//打印一行
//		int k = 0;
//		for (k = 0;k <= i;k++) {
//			printf(" ");
//		}
//		for (k = 0;k < 2 * (line - 1 - i) - 1;k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//// 程序分析：第i项有第i个数字a，所以，假设第i项为tmp，则第i+1项为tmp*10+a
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	printf("请分别输入数字和项数：\n");
//	scanf("%d%d", &a, &n);
//	for (i = 0;i < n;i++) {
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}



//写一个函数，可以逆序一个字符串的内容。
//注意！！不是逆序打印
#include<stdio.h>
#include<stdlib.h>

void Reverse(char* arr) {
	//定义两个指针，一个指向字符串首位，一个指向字符串末位
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right) {
		//交换最两边的值，向内递进
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main() {
	char arr[] = "abcdef521";
	printf("逆序前：%s\n", arr);
	Reverse(arr);
	printf("逆序后：%s\n", arr);
	system("pause");
	return 0;
}
