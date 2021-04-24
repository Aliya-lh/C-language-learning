#include<stdio.h>
void swap(int* x, int* y) {
	//解引用操作 
	//x=&a
	//此处的*x和a是等价的
	//y=&b
	//此处的*y和b是等价的
	int tmp = *x;
	*x = *y;
	*y= tmp;
}

int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);

}



//写一个函数判断一个数是不是素数
//返回值设定为int  是素数就返回1，不是素数就返回0
//is it a prime num?

 #include<stdio.h>
int isPrime(int num){
	if (num==0||num == 1) {
		return 0;
	}
	for (int i = 2;i < num;i++) {
		if (num % i == 0) {
			//这种情况就是找到反例了！！！
			return 0;
		}
	}
	//循环结束也没找到反例，当前就认为是素数
	return 1;
}
int main(){
	printf("%d\n",isPrime(1));
}



//写一个函数判断一年是不是闰年
 #include<stdio.h>
int isLeapYear(int year) {
	if (year % 100 == 0) {//世纪闰年
		if (year % 400 == 0) {
			return 1;
		}
		return 0;
	}else {
		if (year % 4 == 0) {
			return 1;
		}
		return 0;
		}
		//普通闰年
	}


int main() {
	printf("%d\n", isLeapYear(1984));
}


//写一个函数，实现一个整型有序数组的二分查找
//其中arr表示待查找的数组
//toFind表示要去查找数字
//形参这里的int arr[]已经不是一个数组了，隐式转换成了一个指针
//int*

 #include<stdio.h>
int binarySearch(int* arr, int size,int toFind) {
	int left = 0;
	int right = size-1;
	//[left,right]构成了一个闭区间
	//只要这个区间不为空，就需要进行查找
	while (left <= right) {
		int mid = (left + right) / 2;
		if (toFind < arr[mid]) {
			//去左侧查找
			right = mid - 1;
		}else if (toFind>arr[mid]) {
			//去右侧查找
			left = mid + 1;
		}else {
			//找到了 此处咱们使用函数返回值表示找到的元素的下标位置
			//最好不要直接printf
			//我们也不知道调用者到底是想拿到结果之后咋做
			//调用这可能是需要打印，也可能是需要记录文件，也可能是参与其他运算
			//这些都不是binarySesrch这个函数本身应该考虑的事情
			//一个函数只做一件事情！！
			return mid;
		}
	}
	//如果上面的循环最后也没找到合适的元素，认为没找到
	//返回一个无效的下标，通常就是返回-1
	return -1;
	
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int size= sizeof(arr) / sizeof(arr[0]);
	//C语言中求数组长度和数组个数的典型用法
	int ret=binarySearch(arr,size,6);
	printf("ret=%d\n", ret);
}



//写一个函数，每调用一次这个函数，就会将num的值增加1
//函数声明
 #include<stdio.h>
void func(int* num) { //函数定义
	(*num)++;
}

int main() {
	int num = 0;
	func(&num);
	printf("%d\n", num);
}



//递归
//接受一个整型值（无符号），按照顺序打印它的每一位
//输入:1234 输出：1 2 3 4
 #include<stdio.h>
void printNum(unsigned int num) {
	if (num > 9) {
		printNum(num / 10);
	}
	printf("%d", num % 10);
}
int main() {
	printNum(1234);

}


//编写一个函数不允许创建临时变量，求字符串的长度
#include<stdio.h>
int myStrlen(char str[]) {
	//从字符串开头开始，依次往后找，\0
	//每次遇到一个字符，如果不是\0,就count++
	//遇到\0就循环结束，返回count即可
	int count = 0;
	while (str[count] != '\0') {
		count++;
	}
	return count;
}

int main() {
	printf("%d\n", myStrlen("abcd"));
}

//如果不让创建局部变量，或者不让使用循环，就可以考虑下递归
#include<stdio.h>
int myStrlen2(char* str) {
	if (str[0] == '\0') { //说明没有合法字符在里面
		return 0;
	}
	return 1 + myStrlen2(str + 1);
}

int main() {
	printf("%d\n", myStrlen2("abcd"));
	return 0;
}

//用递归方法求5！
#include<stdio.h>
int factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factor(n - 1);
}

int main() {
	printf("%d\n", factor(5));
	return 0;

}


//斐波那契数列
#include<stdio.h>
int fib(int n) {
	if (n == 1 || n== 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	printf("%d\n", fib(5));
	return 0;

}

//非递归 通过循环的方式
#include <stdio.h>
int fib2(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	//使用变量i表示当前项
	int last2 = 1;//i-2项
	int last1 = 1;//i-1项
	int cur = 0;//当前第i项的结果
	for (int i = 3;i <= n;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main() {
	printf("%d\n", fib2(5));
	return 0;
}


//创建数组
//#define SIZE 4 //可以使用宏
//也可以枚举
enum {
	SIZE=4,
};

#include<stdio.h>
int main() {
	const int n = 4;
	int n = 4;
	int arr[SIZE] = { 0 };
	//也可以使用count
	//int arr[n] = { 0 };
}
#include<stdio.h>
int main() {
	int arr[10] = { 0 };
	//通过循环的方式，给这个数组都设置一个值，从1-10
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 1;
	}
	for (int i = 0;i < 10;i++) {
		printf("%d\n", arr[i]);
	}
}

