////求两个数二进制中不同位的个数
////编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
////输入例子:1999 2299
////输出例子 : 7
//
////程序分析：
////1.求不同位，先将m和n进行按位异或，此时m和n相同的的二进制位清零，不同的二进制比特位为1；
////2.统计异或完成后结果（tmp）的二进制比特位中有多少个1即可（采用按位与）
//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int diffBit(int m, int n) {
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp) {
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//
//}
//int main() {
//	int m, n;
//	while (scanf("%d %d", &m, &n) == 2) {
//		printf("%d\n", diffBit(m, n));
//	}
//	return 0;
//}


////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
////程序分析：二进制序列在计算机中的存储位有32位
////利用移位和与操作符来实现
////把要打印的那一位和1相与，结果就是它本身
////通过移位操作让要打印的位数和1相与就能把这一位成功打印到屏幕上了
//#include<stdio.h>
// 
//int main(){
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 31;i >= 1;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30;i >= 0;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	return 0;
//
//}

////写一个函数返回参数二进制中 1 的个数。
////比如： 15    0000 1111    4 个 1
//#include<stdio.h>
//int countOneBits(unsigned int num) {
//	int count = 0;
//	while (num != 0) {
//		num = num & (num - 1);//去掉二进制位最低位的1
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	unsigned int num = 0;
//	printf("请输入：");
//	scanf("%d", &num);
//	printf("%d\n", countOneBits(num));
//	return 0;
//}

////交换两个变量（不创建临时变量）不允许创建临时变量，交换两个整数的内容
//#include<stdio.h>
//int main() {
//	int a = 520;
//	int b = 1314;
//	printf("before:\n");
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:\n");
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

////交换数组 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
////程序分析：实现数组的交换：
//// 首先，创建数组，在main函数中将数组的值传递给外部Fun函数
////其次，外部Fun函数通过一个循环对数组里面的值进行交换
////最后，在main函数中调用Fun函数，打印数组A，B
//#include<stdio.h>
//#include<stdlib.h>
//void Fun(char arr1[], char arr2[]) {
//	int i = 0;
//	for (i = 0;i < 4;i++) {
//		//简单交换
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main() {
//	char arr1[] = { "abcd" };
//	char arr2[] = { "dcba" };
//	Fun(arr1, arr2);
//	//输出字符串用%s
//	printf("arr1=%s arr3=%s", arr1, arr2);
//	printf("\n");
//	system("pause");
//	return 0;
//}


////创建一个整形数组，完成对数组的操作
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//
//void Init(int arr[], int sz, int set) {
//	int i = 0;
//	for (i = 0;i < sz;i++) {
//		arr[i] = set;
//	}
//}
//
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0;i < sz;i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

////实现一个对整形数组的冒泡排序
////实现一个对整型数组的冒泡排序
////从大到小
////打印数组
//#include<stdio.h>
//void print_arr(int arr[], int sz) {
//	int i = 0;
//	for (i = 0;i < sz;i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
////冒泡排序
//void bubble(int arr[], int sz) {
//	int i = 0;
//	for (i = 0;i < sz - 1;i++) {
//		int k = 0;
//		for (k=0;k<sz-1-i;k++){
//			if (arr[k] < arr[k + 1]) {
//				//不满足前大后小
//				int tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//			
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组长度
//	print_arr(arr, sz);//冒泡排序前
//	bubble(arr, sz);
//	print_arr(arr, sz);//冒泡排序后
//}


