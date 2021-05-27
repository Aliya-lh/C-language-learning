////33. 使用指针打印数组内容
////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
////arr是一个整形一维数组。
////程序分析：由于数组元素都是整数，所以需要定义一个int型的指针，依次遍历数组中的所有元素
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//定义指针变量并初始化,数组名代表的是数组首元素的地址
//	int* p = arr;
//	for (int i = 0;i < size;i++) {
//		printf("%d ", *p);//取到p所指向位置的元素
//		p += 1;//获取到p的下一个位置
//	}
//	return 0;
//}
//
//

//
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int* p = arr;p < arr + size;p += 1) {
//		printf("%d ", *p);
//	}
//	return 0;
//}

//35. 写一个函数，每调用一次这个函数，就会将num的值增加1
#include<stdio.h>
void func(int* num) {
	(*num)++;
}

int main() {
	int num = 0;
	func(&num);
	printf("%d\n", num);
}