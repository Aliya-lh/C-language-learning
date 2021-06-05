//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

////字符串左旋
////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
////程序分析：先将要左旋的前三个家伙逆序（CBADEFG），然后将后半段也逆序（CBAGFED），
////最后整体逆序（DEFGABC）即可。这样只需要做数值交换即可.
//#include<stdio.h>
//
//void reversePart(char* str, int start, int end) {
//	//将字符串start到end这一段逆序
//	int i = 0;
//	int k = 0;
//	char tmp = 0;
//	for (i = start, k = end;i < k;i++, k--) {
//		tmp = str[i];
//		str[i] = str[k];
//		str[k] = tmp;
//	}
//}
//
//void leftRound(char* src, int time) {
//	int len = strlen(src);
//	int pos = time % len;
//	reversePart(src, 0, pos - 1);//逆序前段
//	reversePart(src, pos, len - 1);//逆序后段
//	reversePart(src, 0, len - 1);//整体逆序
//}
//int main() {
//	char str[] = "ABCDEFG";
//	
//	return 0;
//}


////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////AABCD右旋一个字符得到DAABC
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int findRound(const char* src, char* find) {
//	char tmp[256] = { 0 };//用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src);//先拷贝一遍
//	strcat(tmp, src);//再连接一遍
//	return strstr(tmp, find) != NULL;//看看找不找得到
//}
//
//int main() {
//	printf("%d\n", findRound("AABCD", "BCDAB"));
//	return 0;
//}



//
////杨氏矩阵
////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
////请编写程序在这样的矩阵中查找某个数字是否存在。
////要求：时间复杂度小于O(N);
//#include<stdio.h>
//
//int findNum(int a[][3], int x, int y, int f) {
//	int i = 0, k = x - 1;
//	while (k >= 0 && i < k) {
//		if (a[i][k] < f) {
//			//比我大就往下
//			i++;
//		}
//		else if (a[i][k] > f) {
//			//比我小就向左
//			k--;
//		}
//		else return 1;
//	}
//	return 0;
//}
//
//int main() {
//	int a[][3] = { {1,3,5},
//		{3,5,7},
//		{5,7,9} };
//	if (findNum(a, 3, 3, 2)) {
//		printf("It has been found!\n");
//	}
//	else printf("It hasn't been found!\n");
//	return 0;
//}


////数据的存储
////练习4
//#include<stdio.h>
//int main() {
//
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//}

////练习5 工作中比较容易出错的代码！！
//#include<stdio.h>
//int main() {
//	unsigned int i;//unsigned int更容易溢出
//	for (i = 9; i >= 0; i--)
//	{//经典的死循环
//		printf("%u\n", i);
//	}
//}
////类似的，
//unsigned int a = 10;
//unsigned int b = 20;
//a - b;//也会溢出

////练习6
//#include<stdio.h>
//int main() {
//	char a[1000];//字符数组
//	int i;
//	for (i = 0;i < 1000;i++) {
//		//涉及类型转换！！！
//		//将int赋值给char会发生截断！ 
//		// -1的补码为
//		// 1111 1111 1111 1111 1111 1111 1111 1111 
//		// 0000 0000 0000 0000 0000 0000 1111 1111=>255
//		// 相减为
//		// 1111 1111 1111 1111 1111 1111 0000 0000 =>转为char就是\0
//		//也就是i为255时，正好-1-255=>(char)\0
//		//相当于给下标为255的数组的位置设为\0
//		//此时求字符串的长度 255
//		a[i] = -1 - i;
//		
//	}
//	printf("%d", strlen(a));
//	return 0;
//}



//练习8
#include <stdio.h>
unsigned char i = 0;
int main()
{
	for (i = 0;i <= 255;i++)
	{
		printf("hello wolrd\n");
	}
	return 0;
}
