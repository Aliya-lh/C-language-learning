////27. �������
////����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
//	//��������дinit(arr, sizeof(arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}



//26. ��������
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

//���������ʵ������Ľ�����
//���ȣ��������飬��main�����н������ֵ���ݸ��ⲿFun����
//��Σ��ⲿFun����ͨ��һ��ѭ�������������ֵ���н���
//�����main�����е���Fun��������ӡ����A��B
#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void Fun(char arr1[], char arr2[]) {
	int i = 0;
	for (i = 0;i < SIZE;i++) {
		//�򵥽���
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main() {
	char arr1[] = { "abcd" };
	char arr2[] = { "dcba" };
	Fun(arr1, arr2);
	//����ַ�����%s
	printf("arr1=%s arr2=%s", arr1, arr2);
	printf("\n");
	system("pause");
	return 0;
}
