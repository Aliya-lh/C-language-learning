////��ҵ��
////���������Ľϴ�ֵ
//#include <stdio.h>
//#include <stdlib.h>
//
//int maxNum(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	return y;
//}
////����ʹ����Ŀ�����
//int maxNum(int x, int y) {
//	return x > y ? x : y;
//}
//
//int main() {
//	system("pause");
//	return 0;
//}

////�����������Ӵ�С���
//#include <stdio.h>
//#include<stdlib.h>
//
//void swap(int* x, int* y) {//����һ�����������ĺ���swap
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//void func() {//�������������Ƚ���������С
//	int a = 10;
//	int b = 30;
//	int c = 20;
//	// 1. ����a��b�Ƚ�һ��
//	// ���a<b,�ͽ�����������
//	//Ŀ������a��ֵʼ�մ���b
//	if (a < b) {
//		swap(&a, &b);
//	}
//	//2.����a��c�Ƚ�
//	//���a<c���ͽ�����������
//	//Ŀ������a��ֵʼ�ձ�c��
//	if (a < c) {
//		swap(&a, &c);
//	}
//	//a�д�ľ���3���������ֵ
//	printf("%d\n", a);
//	//3.�ٱȽ�һ��b��c��˭��������˭
//	if (b > c) {
//		printf("%d\n", b);
//		printf("%d\n", c);
//	}
//	else {
//		printf("%d\n", c);
//		printf("%d\n", b);
//	}
//	printf("\n");
//}
//
//int main() {
//	func();
//	system("pause");
//	return 0;
//}

//�����������Ӵ�С��� a=30,b=20,c=10
#include<stdio.h>
#include<stdlib.h>

void swap(int* x,int* y) {//ʹ��ָ��������������ߵ�ֵ
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


void func() {
	int a = 10;
	int b = 30;
	int c = 20;
	//1.�ȱȽ�a��b�Ĵ�С 
	//���a<b���ͽ���a��b��ֵ
	//����Ϊ��ȷ��a��ֵʼ�մ���b��ֵ
	if (a < b) {
		swap(&a, &b);
	}
	//2.�ٱȽ�a��c�Ĵ�С
	// ���a<c���ͽ���a��c��ֵ
	//����Ϊ��ȷ��a��ֵʼ�մ���c��ֵ
	if (a < c) {
		swap(&a, &c);
	}
	printf("%d\n", a);//���������ֵa
	//3.�ٱȽ�b��c�Ĵ�С
	// ���b>c�������b��c
	// ��������c,b
	if (b > c) {
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else {
		printf("%d\n", c);
		printf("%d\n", b);
	}
	printf("\n");
}

int main() {
	func();
	system("pause");
	return 0;
}