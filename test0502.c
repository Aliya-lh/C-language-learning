////���������������в�ͬλ�ĸ���
////���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
////��������:1999 2299
////������� : 7
//
////���������
////1.��ͬλ���Ƚ�m��n���а�λ��򣬴�ʱm��n��ͬ�ĵĶ�����λ���㣬��ͬ�Ķ����Ʊ���λΪ1��
////2.ͳ�������ɺ�����tmp���Ķ����Ʊ���λ���ж��ٸ�1���ɣ����ð�λ�룩
//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int diffBit(int m, int n) {
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp) {
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//
//}
//int main() {
//	int m, n;
//	while (scanf("%d %d", &m, &n) == 2) {
//		printf("%d\n", diffBit(m, n));
//	}
//	return 0;
//}


////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
////��������������������ڼ�����еĴ洢λ��32λ
////������λ�����������ʵ��
////��Ҫ��ӡ����һλ��1���룬�������������
////ͨ����λ������Ҫ��ӡ��λ����1������ܰ���һλ�ɹ���ӡ����Ļ����
//#include<stdio.h>
// 
//int main(){
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 31;i >= 1;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30;i >= 0;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	return 0;
//
//}

////дһ���������ز����������� 1 �ĸ�����
////���磺 15    0000 1111    4 �� 1
//#include<stdio.h>
//int countOneBits(unsigned int num) {
//	int count = 0;
//	while (num != 0) {
//		num = num & (num - 1);//ȥ��������λ���λ��1
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	unsigned int num = 0;
//	printf("�����룺");
//	scanf("%d", &num);
//	printf("%d\n", countOneBits(num));
//	return 0;
//}

////����������������������ʱ����������������ʱ������������������������
//#include<stdio.h>
//int main() {
//	int a = 520;
//	int b = 1314;
//	printf("before:\n");
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:\n");
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

////�������� ������A�е����ݺ�����B�е����ݽ��н�����������һ����
////���������ʵ������Ľ�����
//// ���ȣ��������飬��main�����н������ֵ���ݸ��ⲿFun����
////��Σ��ⲿFun����ͨ��һ��ѭ�������������ֵ���н���
////�����main�����е���Fun��������ӡ����A��B
//#include<stdio.h>
//#include<stdlib.h>
//void Fun(char arr1[], char arr2[]) {
//	int i = 0;
//	for (i = 0;i < 4;i++) {
//		//�򵥽���
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main() {
//	char arr1[] = { "abcd" };
//	char arr2[] = { "dcba" };
//	Fun(arr1, arr2);
//	//����ַ�����%s
//	printf("arr1=%s arr3=%s", arr1, arr2);
//	printf("\n");
//	system("pause");
//	return 0;
//}


////����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include<stdio.h>
//
//void Init(int arr[], int sz, int set) {
//	int i = 0;
//	for (i = 0;i < sz;i++) {
//		arr[i] = set;
//	}
//}
//
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0;i < sz;i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

////ʵ��һ�������������ð������
////ʵ��һ�������������ð������
////�Ӵ�С
////��ӡ����
//#include<stdio.h>
//void print_arr(int arr[], int sz) {
//	int i = 0;
//	for (i = 0;i < sz;i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
////ð������
//void bubble(int arr[], int sz) {
//	int i = 0;
//	for (i = 0;i < sz - 1;i++) {
//		int k = 0;
//		for (k=0;k<sz-1-i;k++){
//			if (arr[k] < arr[k + 1]) {
//				//������ǰ���С
//				int tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//			
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����鳤��
//	print_arr(arr, sz);//ð������ǰ
//	bubble(arr, sz);
//	print_arr(arr, sz);//ð�������
//}


