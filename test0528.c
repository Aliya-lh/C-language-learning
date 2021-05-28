//28. 冒泡排序
//实现一个对整形数组的冒泡排序
//冒泡排序
#include<stdio.h>

void bubbleSort(int arr[], int size) {
	int bound = 0;
	for (int bound = 0;bound < size;bound++) {
		for (int cur = size - 1;cur > bound;cur--) {
			if (arr[cur - 1] > arr[cur]) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = { 9,5,6,4,3,2,1,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0;i < size;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n "); 
	return 0;
}