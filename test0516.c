////27. 数组操作
////创建一个整形数组，完成对数组的操作
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 10
//void init(int arr[], int size) {
//	for (int i = 0;i < size;i++) {
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int size) {
//	for (int i = 0;i < size;i++) {
//		printf("%d\n", arr[i]);
//	}
//}
//
//void reverse(int arr[], int size) {
//	int left = 0;
//	int right = size - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
// }
//int main() {
//	int arr[SIZE];
//	init(arr, SIZE);
//	for (int i = 0;i < SIZE;i++) {
//		arr[i] = i;
//	}
//	reverse(arr, SIZE);
//	print(arr, SIZE);
//	
//	//或者这样写init(arr, sizeof(arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}



//26. 交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//程序分析：实现数组的交换：
//首先，创建数组，在main函数中将数组的值传递给外部Fun函数
//其次，外部Fun函数通过一个循环对数组里面的值进行交换
//最后，在main函数中调用Fun函数，打印数组A，B
#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void Fun(char arr1[], char arr2[]) {
	int i = 0;
	for (i = 0;i < SIZE;i++) {
		//简单交换
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main() {
	char arr1[] = { "abcd" };
	char arr2[] = { "dcba" };
	Fun(arr1, arr2);
	//输出字符串用%s
	printf("arr1=%s arr2=%s", arr1, arr2);
	printf("\n");
	system("pause");
	return 0;
}
