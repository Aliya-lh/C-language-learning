////�����Ŀ��ϰ����
////1.дһ�����������������Ľϴ�ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxNum(int x, int y) {
//	return (x > y) ?x: y;//ʹ����Ŀ�����
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = maxNum(a,b);//����������ϣ�ret���ڽ���Max�ķ���ֵ
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxNum(int x,int y) {
//	if (x > y) {
//		return x;
//	}return y;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", maxNum(a,b));
//	system("pause");
//	return 0;
//}

////2.д���뽫�����������Ӵ�С���
//#include<stdio.h>
//#include<stdlib.h>
//
////����һ��������������
//void swap(int* x,int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//
////����һ�����������Ƚϴ�С
//void func() {
//	int a = 10;
//	int b = 30;
//	int c = 20;
//	if (a < b) {
//		swap(&a, &b);
//	}
//	if (a < c) {
//		swap(&a, &c);
//	}
//	printf("%d ", a);
//	if (b > c) {
//		printf("%d ", b);
//		printf("%d ", c);
//	}
//	else {
//		printf("%d ", c);
//		printf("%d ", b);
//	}
//
//}
//
//
//int main() {
//	func();
//	system("pause");
//	
//}


////3.��ӡ3�ı���
////���������3�ı���һ��������3�������ж� i%3==0 �Ƿ����
//#include<stdio.h>
//#include<stdlib.h>
//
//void print3() {
//	for (int i = 1;i <= 100;i++) {//ʹ��һ��ѭ��
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//}
//
//int main() {
//	print3();
//	system("pause");
//}


////4.���������������������������Լ��
////���磺���룺20 40 �����20
////������������Լ��һ����[1��min��x,y)]��Χ��
////������������⣡һ��һ���ԣ�
////�ܱ�������ͬʱ�������ǹ�Լ��
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxGongYueShu(int x,int y) {
//	//������Ŀ������ж��������н�С��min
//	int min = (x < y) ? x : y;
//	int result = 1;
//	for (int i = 1;i <=min ;i++) {
//		if (x%i == 0 && y%i == 0) {
//			//ע����һ��������x%i ����i%x���������磺3%2=1
//			result = i;//��i��ֵ����result
//		}
//	}
//	return result;
//}
//
//int main() {
//	printf("%d\n", maxGongYueShu(100,120));
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxGongYueShu(int x, int y) {
//	int min = (x < y) ? x : y;
//	int result = 1;
//	for (int i = 1;i <= min;i++) {
//		if (x % i == 0 && y % i == 0) {
//			result = i;
//		}
//	}return result;
//}
//
//int main() {
//	printf("%d", maxGongYueShu(100, 120));
//	system("pause");
//	return 0;
//}


////5. ��ӡ���꣨��ӡ1000-2000��֮������꣩
////�����������ͨ���꣺���ܱ�100���������ܱ�4����
////�������꣺�ܱ�100������Ҳ�ܱ�400����
////���������ж��ܲ��ܱ�100����
//#include<stdio.h>
//#include<stdlib.h>
////�ú������÷�ʽ
//void year_run() {
//	for (int year = 1000;year <= 2000;year++) {
//		if (year % 4 == 0) {
//			if (year % 100 != 0) {
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0) {
//			printf("%d ", year);
//		}
//	}
//}
//
//int main() {
//	year_run();
//	system("pause");
//}

////��ѭ����ʽ
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	for (int year = 1000;year <= 2000;year++) {
//		if (year % 4 == 0) {//�ܱ�4���������ܱ�100��������ͨ����
//			if (year % 100 != 0) {
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0) {
//			//ÿ400������һ�Σ�������������
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}


////6. ��ӡ������дһ�����룺��ӡ100-200֮���������
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int count = 0;
//	for (int i = 101;i <= 200;i++) {
//		for (int k = 2;k < i;k++) {
//			if (i % k == 0) {
//				break;
//			}
//		}
//		if (k == i) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


