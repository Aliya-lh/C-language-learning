//31. ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int countOneBits(unsigned int num) {
	int count = 0;
	while (num != 0) {
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main() {
	unsigned int num = 0;
	printf("�����룺");
	scanf("%d", &num);
	printf("%d\n", countOneBits(num));
	return 0;
}