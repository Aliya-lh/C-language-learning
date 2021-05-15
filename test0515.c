////将字符串逆序，不是逆序打印！！
////非递归方法
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void reverseString(char str[]) {
//	int left = 0;//先创建一个left=0（最开始元素的下标）
//	int right = strlen(str) - 1;//最后一个元素的下标
//	while (left < right) {//满足条件就交换left和right位置的元素
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char str[] = "abcd";
//	reverseString(str);
//	printf("%s\n", str);
//	system("pause");
//	
//}

////巩固练习
////将字符串逆序
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void reverseString(char str[]) {
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main() {
//	char str[] = "abcdef";
//	reverseString(str);
//	printf("%s\n", str);
//	system("pause");
//}

////用递归方法（但该题不适合用递归，比较复杂）
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void reverseString2(char str[]) {
//	//先去交换左右两侧边缘的字符，然后递归处理中间的字符串
//	//为了知道右侧的边缘的字符是啥，就需要先知道字符串的长度
//	int len = strlen(str);
//	if (len == 0||len==1) {
//		return;
//	}
//	//交换边缘的元素
//	char tmp = str[0];
//	str[0] = str[len - 1];
//
//	str[len - 1] = '\0';//注意！！用单撇号！！
//	//这个操作是一个临时性的操作，目的是为了让中间的“bcde”能作为一个独立的字符串
//
//	//递归的来处理中间部分的字符串了
//	//为了得到中间部分的字符串，需要做两件事
//	//str+1，得到中间字符串的起始位置
//	//还需要把刚才的len-1  f  的位置设置为\0
//
//	//进行递归操作
//	reverseString2(str + 1);
//	//刚才是临时将len-1 的位置设为\0了
//	//当递归结束后，还需要将len -1 的位置还原成合理的值
//	str[len - 1] = tmp;
//}
//
//
//int main() {
//	char str[] = "abcdef";
//	reverseString2(str);
//	printf("%s\n", str);
//	system("pause");
//}


//22. 计算一个数的每位之和（递归实现）
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

////非递归方法
//#include<stdio.h>
//#include<stdlib.h>
//
//int digitSum(unsigned int num) {
//	//只要取出每一位，进行累加即可
//	int sum = 0;
//	while (num != 0) {
//	 //取出个位
//		printf("%d\n", num % 10);
//		sum += num % 10;//与sum=sum+num%10;等价
//		num /= 10;//与num=num/10;等价
//	}
//	return sum;
//
//	
//
//}
//
//int main() {
//	int ret = digitSum(1792);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}


////递归方法
//#include<stdio.h>
//#include<stdlib.h>
//
//int digitSum2(unsigned int num) {
//	if (num == 0) {
//		return 0;
//	}//取出个位的值，再加上递归处理剩余的位
//	return num % 10 + digitSum2(num / 10); 
//	
//}
//
//
//int main() {
//	int ret = digitSum2(1792);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

////递归方法
//#include<stdio.h>
//#include<stdlib.h>
//
//int digitSum(unsigned int num) {
//	//1.明确这个函数是用来做什么的：分别取出这个数的每一位，进行累加
//	//2.找出函数结束条件：当num==0时，函数返回
//	//3.找出等价关系式：个位+递归处理剩余的位
//	//num%10+digitSum（num/10)  例如：1792=> 1 + 179
//	if (num == 0) {
//		return 0;
//	}
//	return num % 10 + digitSum(num / 10);
//}
//
//
//int main() {
//	printf("%d\n", digitSum(1792));
//	system("pause");
//	return 0;
//}



//23. 递归实现n的k次方
//编写一个函数实现n的k次方，使用递归实现。

//非递归方法
#include<stdio.h>
#include<stdlib.h>

int myPower(int n,int k ) {
	int sum = 0;
	for (int i= 1;i <= k;i++) {
		sum = sum * n ^ (k - i);
	}
	return sum;
}



int main() {
	int ret = myPower(2, 3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

////递归方法
//#include<stdio.h>
//#include<stdlib.h>
//
//int myPower(int n,int k){
//	if (k == 0) {
//		return 1;
//	}
//	return n * myPower(n,k-1);
//	
//}
//
//int main() {
//	printf("%d\n", myPower(2, 10));
//	system("pause");
//	return 0;
//}
