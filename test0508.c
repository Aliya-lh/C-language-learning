//��ҵ��
//���������Ľϴ�ֵ
#include <stdio.h>
#include <stdlib.h>

int maxNum(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}
//����ʹ����Ŀ�����
int maxNum(int x, int y) {
	return x > y ? x : y;
}

int main() {
	system("pause");
	return 0;
}

//�����������Ӵ�С���
#include <stdio.h>
#include<stdlib.h>

void swap(int* x, int* y) {//����һ�����������ĺ���swap
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void func() {//�������������Ƚ���������С
	int a = 10;
	int b = 30;
	int c = 20;
	// 1. ����a��b�Ƚ�һ��
	// ���a<b,�ͽ�����������
	//Ŀ������a��ֵʼ�մ���b
	if (a < b) {
		swap(&a, &b);
	}
	//2.����a��c�Ƚ�
	//���a<c���ͽ�����������
	//Ŀ������a��ֵʼ�ձ�c��
	if (a < c) {
		swap(&a, &c);
	}
	//a�д�ľ���3���������ֵ
	printf("%d\n", a);
	//3.�ٱȽ�һ��b��c��˭��������˭
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

}

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

}

//��ӡ3�ı�����дһ�������ӡ1-100֮������3�ı���������
#include<stdio.h>
#include<stdlib.h>

void print3() {
	for (int i = 1;i <= 100;i++) {// ǰ�պ�д��ֻ�ǽ��飬��ȡ���ʡ������д��
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
}
int main() {
	print3();
	system("pause");

}

//��ӡ3�ı�����дһ�������ӡ1-100֮������3�ı���������
#include<stdio.h>
#include<stdlib.h>

//����������ʾ
void print3() {
	for (int i = 1;i <= 100;i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
}

int main() {
	print3();
	system("pause");

}

//�ҳ����Լ��
//Լ�� ���� ����
//6����2����3 6����1����6 8����2����4 8����1����8 
// ����2Ϊ6��8�����Լ��
//2��3=6 2��3Ϊ6������
//6����2����3 ��2��Ϊ6������

//������������ñ�����⣡��
//�������x��y�����Լ��һ��������[1��min(x��y)]֮��
//6��8�����Լ��һ��������1-6֮��~
#include<stdio.h>
#include<stdlib.h>

int maxGongYueShu(int x, int y) {
	int min = x < y ? x : y;//������Ŀ������ж�
	int result = 1;
	for (int i = 1;i <= min;i++) {//�ж����Լ��һ��������[1��min(x��y)]֮��
		if (x % i == 0 && y % i == 0) {
			//i����x y�Ĺ�Լ��
			result = i;//����i++������ÿ����һ�Σ��õ����µ�i�϶��ȾɵĴ�
		 //����Ҫ��ס���еĹ�Լ����ֻҪ���ҵ����ļ��ɣ�ֻ��Ҫ��������һ����Ϊ���ģ�
		}
	}
	return result;//�����Ǻ������أ��õ���result�������Լ��
}
int main() {
	printf("%d\n", maxGongYueShu(100, 120));
	system("pause");
	return 0;
}

//�����Լ��
#include<stdio.h>
#include<stdlib.h>
 
int maxGongYueShu(int x, int y) {
	int min = x < y ? x : y;
	int result = 1;
	for (int i = 1;i <= min;i++) {
		if (x % i == 0 && y % i == 0) {
			result =i;
		}
	}
	return result;
}

int main() {
	printf("%d\n", maxGongYueShu(100, 120));
	system("pause");
	return 0;
}

//��дһ��������һ��1-100������������9�ĸ���
//˼·����9��β������9 19 29 39 49 59 69 79 89
//9��Ϊʮλ������91 92 93 94 95 96 97 98
//�����99����������9
// ��20��
//���������ȡ��������ֵĸ�λ��ʮλ���ֱ��ж�һ�¿��ǲ���9����~
//ȡ����λ��num % 10  ȡ��ʮλ��num/10 ȡ����λ��num/100
#include<stdio.h>
#include<stdlib.h>

int nineCount() {
	int count = 0;
	for (int i = 1;i <= 100;i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	return count;
}


int main() {
	printf("%d\n", nineCount());
	system("pause");
	return 0;
}

//��дһ��������һ��1-100������������9�ĸ���
#include<stdio.h>
#include<stdlib.h>

int nineCount() {
	int count = 0;
	for (int i = 1;i <= 100;i++) {
		if (i % 10 == 9) {//ע���жϸ�λ��ʮλҪ�ֱ��ж�
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	return count;
}

int main() {
	printf("%d\n", nineCount());
	system("pause");
	return 0;
}


//�������
//����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
//�������

#include<stdio.h>
#include<stdlib.h>

double fenshuqiuhe() {
	double sum = 0.0f;
	for (int i = 1;i <= 100;i++) {
		if (i % 2 == 1) {//������
			sum += 1.0 / i;
		}
		else {
			//ż����
			sum -= 1.0 / i;
		}
	}
	return sum;
}


int main() {
	printf("%f\n", fenshuqiuhe());
	system("pause");
	return 0;
}

//�������
// ����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
#include<stdio.h>
#include<stdlib.h>

double fenshuqiuhe() {
	double sum = 0.0f;
	for (int i = 1;i <= 100;i++) {
		if (i % 2 ==1) {
			sum += 1.0 / i;
		}
		else {
			sum -= 1.0 / i;
		}
	}
	return sum;
}
int main() {
	printf("%f\n", fenshuqiuhe());
	system("pause");
	return 0;
}

//�����ֵ
//���������ʹ�á�����̨������
#include<stdio.h>
#include<stdlib.h>

int getMax(int arr[], int size) {
	int maxNum = arr[0];
	for (int i = 1;i < size;i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}
	return maxNum;
}

int main() {
	int arr[] = { 9,5,2,7,3,6,8,12,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int result=getMax(arr, size);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}

//�����ֵ
//Ӧ������
#include<stdio.h>
#include<stdlib.h>

int getMax(int arr[], int size) {
	int maxNum = arr[0];
	for (int i = 1;i < size;i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}
	return maxNum;
}

int main() {
	int arr[] = { 9,5,2,7,3,6,8,12,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = getMax(arr, size);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}

//����˷��ھ���
// ���к�Ϊ�������о�ÿһ�д�ӡ�����ݺ��к�֮��Ĺ�����ʲô~
// �ҹ���~~һ��һ�д�ӡ
// 1.һ����ӡ9��
// 2.��i�д�ӡi��
// 3.��Ե�row�У���col�У���ӡ�����ݾ���col*row
// �С���
#include<stdio.h>
#include<stdlib.h>

int printMultiply() {
	for (int row = 1;row <= 9;row++) {
		//��row��Ҫ��ӡrow����
		for (int col = 1;col <= row;col++) {
			printf("%d*%d=%d ", col, row, col * row);
		}
		printf("\n");
	}
}

int main() {
	printMultiply();
	system("pause");
	return 0;
}

//���12*12�˷��ھ���
#include<stdio.h>
#include<stdlib.h>

void printMultiply(int maxRow) {
	for (int row = 1;row <= maxRow;row++) {
		for (int col = 1;col <= row;col++) {
			printf("%d*%d=%d ", col, row, col * row);
		}
		printf("\n");
	}
	
}

int main() {
	printMultiply(12);
	system("pause");
}

