////���ֲ���
////����������
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 8;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if(arr[mid]=k){
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ�����");
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 6;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ�����");
//	}
//	system("pause");
//	return 0;
//}

//
////�ú�������ʵ��
//#include<stdio.h>
//#include<stdlib.h>
//
//int binarySearch(int* arr, int size, int toFind) {
//	int left = 0;
//	int right = size - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (toFind < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (toFind > arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = binarySearch(arr, size, 6);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}


//
//ð������
//ʵ��һ�������������ð�����򣨴�С����
#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int size) {
	//�Ӻ���ǰ�����汾
	//ÿһ���ܰ���С��ֵ�ŵ���ǰ��
	int bound = 0;
	for (bound = 0;bound < size;bound++) {
		for (int cur = size - 1;cur > bound;cur--) {
			if (arr[cur - 1] > arr[cur]) {
				//�������������������н���
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = { 9,8,4,3,5,2,1,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0;i < size;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


////ð������    �����⣡����
////ʵ��һ�������������ð�����򣨴Ӵ�С��
//#include<stdio.h>
//#include<stdlib.h>
//
//void bubbleSort(int arr[], int size) {
//	//��ǰ��������汾
//	//ÿһ���ܰ�����ֵ�ŵ���ǰ��
//	int bound = 0;
//	for (bound = 0;bound < size;bound++) {
//		for (int cur = size - 1;cur > bound;cur--) {
//			if (arr[bound+1] > arr[bound]) {
//				//�����Ͻ������������н���
//				int tmp = arr[bound+1];
//				arr[bound+1] = arr[bound];
//				arr[bound] = tmp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,5,2,7,3,6,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, size);
//	for (int i =0;i < size;i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



////�ݹ��ӡһ������ÿһλ
//#include<stdio.h>
//
//void printNum(unsigned int num) {
//	if (num > 9) {
//		printNum(num / 10);
//	}
//	printf("%d", num % 10);
//}
//
//int main() {
//	printNum(1234);
//	return 0;
//}
//
////�ݹ�ʵ��k��n�η�
//#include<stdio.h>
//
//int myPower(int n, int k) {
//	if (k == 0) {
//		return 1;
//	}return n * myPower(n, k - 1);
//}
//int main() {
//	printf("%d\n", myPower(2, 10));
//	return 0;
//}

////����쳲�������
//#include<stdio.h>
//
//int fib(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//	printf("%d\n", fib(2));
//	return 0;
//}

////��������
//#define SIZE 4
//#include<stdio.h>
//void Fun(char arr1[], char arr2[]) {
//	int i = 0;
//	for (i = 0;i < SIZE;i++) {
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main() {
//	char arr1[] = "abcd";
//	char arr2[] = "efgh";
//	Fun(arr1, arr2);
//	printf("arr1=%s,arr2=%s", arr1, arr2);
//	printf("\n");
//	return 0;
//}

