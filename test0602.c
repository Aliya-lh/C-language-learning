////�����⣡�����������
////��ӡ0~100000֮�����е�ˮ�ɻ��������
////1.���ж���������Ǽ�λ��
////2.ȡ����������е�ÿһλ�����ҽ�����n�η�����
////3.��Ͳ��ҽ����ж�
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int calcDecimalCount(int num) {//�ж��Ǽ�λ��
//	int count = 0;
//	while (num != 0) {
//		num /= 10;
//		count++;
//	}
//	return count;
//}
//
//
//int isShuiXian(int num) {
//	int oldNum = num;//��¼һ�������num��ֵ
//	int n = calcDecimalCount(num);
//	//ȡ��ÿһλ�����
//	int sum = 0;
//	while (num != 0) {
//		int tmp = num % 10;
//		num /= 10;
//		sum += (int)pow(tmp, n);
//	}
//	//�ж�һ���Ƿ���ˮ�ɻ���
//	if (sum == oldNum) {
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	for (int i = 1;i <= 100000;i++) {
//		if (isShuiXian(i)) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}


//��ӡ����
//��������������ⶼ���ҹ��ɣ�һ��һ�д�ӡ �кź�ÿһ�д�ӡ�Ķ���
//�����η�Ϊ�������� ������ + ���� + ������ 
//��Ҫ�ҵ��к� �ո�/�Ǻ�֮��Ĺ�ϵ����
//��һ�� 6���ո� 1��*
//�ڶ��� 5���ո� 3��*
//������ 4���ո� 5��*
//������ 3���ո� 7��*
//��i�� ��7-i�����ո�  ��2*i-1�� ��*
//������һ����ӡ6�У�ѭ��6��
#include<stdio.h>

void printLine(int starCount, int spaceCount) {
	for (int i = 0;i < spaceCount;i++) {//�ȴ�ӡ�ո�
		printf(" ");
	}
	for (int i = 0;i < starCount;i++) {//�ٴ�ӡ�Ǻ�
		printf("*");
	}
	printf("\n");
}

void printLingXing() {
	//1.�ȴ�ӡ������
	for (int row = 1;row <= 6;row++) {
		printLine(2 * row - 1, 7 - row);
	}
	//2.��ӡ�м����
	printLine(13, 0);
	//3.����ӡ�����ǣ��Ͱ������ǵĴ�ӡ���̸�������
	for (int row = 6;row >= 1;row--) {
		printLine(2 * row - 1, 7 - row);
	}
	
}

int main() {
	printLingXing();
	return 0;
}