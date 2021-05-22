////求两个数的最小公倍数
////1.定义法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {//创建两个变量
//	int i = 0;
//	int m, n, tmp;
//	printf("请输入两个正整数：");
//		scanf("%d%d", &m, &n);
//	if (m < n) {//比较两个整数的大小，将较大数存于m中
//		tmp = n;
//		n = m;
//		m = tmp;
//	}
//	for (i = m;i > 0;i++) {//从较大数开始找符合条件的最小公倍数
//		if (i % m == 0 && i % n == 0) {
//			printf("%d和%d的最小公倍数是：%d",m,n, i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//
////求两个数的最大公约数
////采用暴力求解！！最大公约数一定出现在[1,min(x,y)]之间
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxGongYueShu(int x, int y) {
//	int min = x < y ? x : y;//采用三目运算符
//	int result = 1;
//	for (int i = 1;i <= min;i++) {
//		if (x % i == 0 && y % i == 0) {
//			result = i;
//		}
//	}return result;
//}
//int main() {
//	printf("%d\n", maxGongYueShu(100,150));
//	system("pause");
//	return 0;
//}




//结构体
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct Student {//{}里面放置结构体的“成员”
//	int id;
//	char name[10];
//};
////typedef struct Student Student;
////或者 #define Student struct Student


typedef struct Student {
	int id;
	char name[1024];
}Student;//这个Student不是全局变量了，而是类型的简化
//这个代码相当于以上两个代码的合体，很常见！！！



int main() {
	//这个代码就是创建了一个变量，名字叫student
	// 这个变量的类型就是struct Student
	
	//前面用typedef对变量重命名后，也可以写成这样
	//Student student ={10,"zhangsan"};
	struct Student student = { 10,"zhangsan" };
	//student ={20,"lisi"};
	// 不能直接对结构体整体使用{}赋值，只能针对每个成员分别赋值
	
	student.id = 20;//. 是成员访问运算，翻译成中文相当于“的”
	//student.name = "lisi";这种写法是错误的！！数组不能用=赋值
	
	strcpy(student.name, "lisi");
	//这种对数组元素逐个赋值的方法太麻烦，实际不会用到
	/*student.name[0] = 'l';
	student.name[1] = 'i';
	student.name[2] = 's';
	student.name[3] = 'i';
	student.name[4] = '\0';
	*/
	printf("%d\n", student.id);
	printf("%s\n", student.name);
	
	
	
	system("pause");
	return 0;
}