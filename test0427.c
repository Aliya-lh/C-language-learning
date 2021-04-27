//冒泡排序
#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int size) {
	//写一下从后往前遍历的版本
	//每次从后往前遍历比较相邻元素，每一趟能把最小的值放到最前面
	//bound=>边界，使用这个变量的值表示已排序区间和待排序区间的分界线
	//[0,bound)已排序区间
	//[bound,size)待排序区间
	int bound = 0;
	for (;bound < size;bound++) {
		//通过这个循环来控制后续比较相邻元素的比较趟数
		//接下来去实现一趟比较交换的过程
		for (int cur = size - 1;cur > bound;cur--) {
			//相邻元素，就是以cur为基准
			//cur-1，cur+1,由于cur是从szie-1开始的
			//就不能使用cur+1作为相邻元素了，必须用cur-1
			//牢记数组下标一定不能越界！！
			if (arr[cur - 1]> arr[cur]) {
				//不符合升序条件，就进行交换
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;

			}
		}
	}
 }
int main() {
	int arr []= { 9,5,2,7,3,6,8};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0;i < size;i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
}