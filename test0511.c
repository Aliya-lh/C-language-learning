//�ַ�������дһ����������������һ���ַ��������ݡ���

////7. ��дһ��������һ��1-100������������9�ĸ���
////���������ȡ��������ֵĸ�λ��ʮλ���ֱ��ж�һ���ǲ���9
////��λ��num%10  ʮλ�� num/10
//#include<stdio.h>
//#include<stdlib.h>
//
//int nineCount() {
//	int count = 0;
//	for (int i = 1;i < 100;i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	printf("%d ", nineCount());
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int nineCount() {
//	int count = 0;
//	for (int i = 1;i < 100;i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	return count;
//}
//
//int main() {
//	printf("%d ", nineCount());
//	system("pause");
//	return 0;
//}
//
////8. ������ͣ�����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�������
////������������������ż�����ж� �������� ��ż����
////ע�⣡������Ҳ����С������double����  �����%f
//#include<stdio.h>
//#include<stdlib.h>
//
//double fenshuqiuhe() {//������������ж��������ż��������
//	double sum = 0.0f;//ע�⣡����ʱΪС����ʽ
//	for (int i = 1;i <=100;i++) {//ע�⣡��i����=100
//		if (i % 2 == 1) {//ע�⣡����һ�����ж��ǲ������������
//			//�����������2��1ʱ����˵�������������
//			sum += 1.0 / i;
//		}
//		else {//��֮������ż����
//			sum -= 1.0 / i;
//		}
//	}
//	return sum;
//
//	
//}
//
//int main() {
//	printf("%f\n", fenshuqiuhe());//ע�⣡��С�������%f
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//double fenshuqiuhe() {
//	double sum = 0.0f;
//	for (int i = 1;i <= 100;i++) {
//		if (i % 2 == 1) {
//			sum += 1.0 / i;
//		}
//		else {
//			sum -= 1.0 / i;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	printf("%f\n", fenshuqiuhe());
//	system("pause");
//	return 0;
//}

////9. �����ֵ����10 �����������ֵ��
////��������������ֵ���á�����̨��������������
//#include<stdio.h>
//#include<stdlib.h>
//
//int getMax(int arr[], int size) {//��������ʱҪָ�����鳤�ȣ��������ʽת��ָ��
//	int maxNum =arr[0];//����һ��������������������õ���ֵ
//	for (int i = 1;i < size;i++) {
//		if (arr[i] > maxNum) {
//			maxNum = arr[i];
//		}
//	}
//	return maxNum;
//}
//
//
//int main() {
//	int arr[] = { 1,2,3,9,8,7,5,4,10,6 };//����һ�����鲢��ʼ��
//	int size = sizeof(arr) / sizeof(arr[0]);//������鳤��
//	int result = getMax(arr,size);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int getMax(int arr[], int size) {
//	int maxNum = arr[0];
//	for (int i = 1;i < size;i++) {
//		if (arr[i] > maxNum) {
//			maxNum = arr[i];
//		}
//	}
//	return maxNum;
//}
//
//int main() {
//	int arr[] = { 1,5,6,72,88,99,14,15,16,21};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int result = getMax(arr, size);
//	printf("%d\n", result);//��������֮ǰ��������鳤�ȣ���������޷����
//	system("pause");
//	return 0;
//}


////10.���9*9�˷���
////����������ҹ��ɣ�
////һ��һ�д�ӡ
//// 1.һ��9��
//// 2.��i�д�ӡi��
//// 3.%d*%d=%d ��row�д�ӡcol�� col*row
//#include<stdio.h>
//#include<stdlib.h>
//
//int printMultiply(int num) {
//	for (int row = 1;row <= num;row++) {
//		for (int col = 1;col <= row;col++) {
//			printf("%d*%d=%d  ", col, row, col * row);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	printMultiply(9);
//	system("pause");
//	return 0;
//}



//11. ��������Ϸ
//�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game() {//����һ������������ʾ�����Ϸ
	printf("��ʼһ�ֲ�������Ϸ\n");
	//1.������һ��[1��100]���������
	int toGuess = rand() % 100 + 1;
	//2.��ʾ�û����н���
	while (1) {
		printf("������һ������[1,100]:");
		int inputNum = 0;
		scanf("%d", &inputNum);
		if (inputNum < toGuess) {
			printf("���ˣ�\n");
		}
		else if (inputNum > toGuess) {
			printf("���ˣ�\n");
		}
		else {
			printf("�¶��ˣ�\n");
			break;
		}
	}
}
	//����һ���������û������Ĳ˵�
	int menu() {
		printf("===================\n");
		printf("��ӭ������������Ϸ��");
		printf("1.��ʼ��Ϸ\n");
		printf("0.�˳���Ϸ\n");
		printf("===================\n");
		printf("���������ѡ��:");
		int choice = 0;
		scanf("%d", &choice);
		return choice;

	}



int main() {
	srand((unsigned int)time(0));
	//ֻҪ��ÿ�����г����ʱ�����õ�������Ӳ�һ��
	//ʱ���
	//ʹ��time��0����ȡ����ǰ��ʱ���
	//����һ�����Ժ��û������Ĳ˵�
	while (1) {
		int choice = menu();
		if (choice == 1) {//����1��ʾ��Ϸ��ʼ
			game();
		}
		else if (choice = 0) {//����0��ʾ��Ϸ����
			printf("goodbye!\n");
			break;
		}
		else {
			printf("������������\n");
		}
	}
	game();
	system("pause");
	return 0;
}
