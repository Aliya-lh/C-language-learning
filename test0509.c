#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("%d\n", sizeof(int*));
	system("pause");
	return 0;
}


//指针运算
#include<stdio.h>
#include<stdlib.h>
int main() {
	int* p =(int*)0x100;//与 char*p=0; 是等价的
	printf("%p\n", p+1);
	//指针+1并不是单纯的地址+1，
	//而是地址要加上一个值，使这个指针能够指向下一个元素~
	system("pause");
}

//解决scanf未被引用问题
//加上
int ret = scanf("%d", &num);
(void)ret;
//无用代码 为了消除警告



// 通过指针遍历数组操作
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 9,5,2,7 };
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int* p = arr;p < arr + size;p += 1) {
		printf("%d\n", *p);
	}
	system("pause");
	
}


//判断一个地址是不是有效地址
#include<stdio.h>
#include<stdlib.h>
int main() {
	int num = 10;
	int* p = &num;
	if (p != NULL) {
		//满足这个条件，p不一定是有效地址,主要还得靠人工来保证
		printf("此时是一个有效的地址！\n");
	}
	else {
		//p一定是无效地址~~
		printf("此时是一个无效的地址！\n");
	}
	system("pause");
}
//判断p是不是空 写法：
if (p == NULL) {//推荐写法

}//或者 不太推荐下面这种写法，可读性比较差
if (!p) {

}
//两者等价

//关于字符串比较
//比较两个字符串，不能直接使用==
//字符串在C中是使用字符数组来表示的
// C中又不支持数组和数组的==比较
// 当我们尝试比较两个数组名的时候，此时，数组又隐式转成了指针了
// 这样的比较就变成了指针比较~
//要想比较字符串，必须使用strcmp
#include<stdio.h>
int main() {
	/*char str1[] = "hello";
	char str2[] = "hello";*/
	char* str1 = "hello";
	char* str2 = "hello";
	if (str1 == str2) {
		printf("hehe\n");
	}
	else {
		printf("haha\n");
	}
	return 0;
}


//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//arr是一个整形一维数组
//程序分析：由于数组元素都是整数，所以需要定义一个int型的指针，依次遍历数组中的所有元素
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);//求出数组长度
	int* p = arr;//定义指针变量并初始化，数组名代表的是数组首元素的地址
	for (int i = 0;i < size;i++) {
		printf("%d ", *p);//取到p所指向位置的元素
		p += 1;//获取到p的下一个位置
	}
	system("pause");
	return 0;
}
//也可以写成以下这种形式
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int* p = arr;p < arr + size;p += 1) {
		printf("%d ", *p);
	}
	system("pause");
	return 0;
}

//写一个函数，可以逆序一个字符串的内容。
//程序分析：
#include<stdio.h>
#include<stdlib.h>


编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//程序分析：求不同位，要用到按位异或^（相同为0，不同为1），将m和n按位异或（m^n）
//此时m和n咸通的二进制位清零，不同的二进制比特位为1
//统计异或完成后结果（tmp）的二级制比特位中有多少个1即可（采用按位与）
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int diffBit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp) {//与tmp!=0;等价
		tmp = tmp & (tmp - 1);//统计异或后有多少个1
		count++;
	}
	return count;
}
int main() {
	int m, n;
	while (scanf("%d %d", &m, &n) == 2) {
		printf("%d\n", diffBit(m,n));
	}
	return 0;
}

