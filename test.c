//
//�ж�һ�����ǲ�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int prime(int n) {
//	int i;
//	if (n < 2) {
//		printf("%d��������", n);
//	}
//	else {
//		for (i = 2;i < n;i++) {//�ж�n��2~n-1����û������
//			if (n % i == 0)//����ÿ��Գ����������������
//				break;
//		}
//	}if (i < n) {//��2~n-1֮��������
//		printf("%d��������\n", n);
//	}
//	else
//		printf("%d������\n", n);
//
//	return 0;
//}
//
//
//int main() {
//	int n;
//	printf("������һ������\n");
//	scanf("%d", &n);
//	prime(n);
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//









//��������Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void��ʾ����û�з���ֵ
//ʹ�����������ʾһ����Ϸ
void game() {
	printf("��ʼһ�ֲ�������Ϸ\n");
	//1.������һ��[1��100]���������
	int toGuess = rand() % 100 + 1;
	//2.��ʾ�û����н���
	while (1) {
		printf("������һ������[1,100]:");
		int inputNum = 0;
		scanf("%d",&inputNum);
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
int menu() {
	printf("=================\n");
	printf("��ӭ������������Ϸ��");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("=================\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;


}

int main() {
	srand((unsigned int )time(0));
	//ֻҪ��ÿ�����г����ʱ�����õ�������Ӳ�һ��
	//ʱ��
	//ʹ��time(0)��ȡ����ǰ��ʱ���                                                                                                         
	//game();
	//����һ�����û������Ĳ˵�
	while (1) {
		int choice = menu();
		if (choice == 1) {
			game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}else{
				printf("������������\n");
		}
	}
	system("pause");
	return 0;
}
//
//
//

// ���ֲ���
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������е�Ԫ��
//	
//	int left = 0;//��������������±�
//	int right = sz - 1;//�������ұ������±�
//
//	while (left <= right)//��ֹ����
//	{
//		int mid = (left + right) / 2;//mid���м������±�
//		if (arr[mid] > k) {
//			right = mid - 1;//�м�����k�ұߣ����ҷ�Χ��Ϊ����ߵ������м���ǰһ����֮��
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;//�м�����k����ߣ����ҷ�Χ��Ϊ�м�����һ���������ұߵ���֮��
//		}
//		else {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)//������ң�������
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ鷽��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Sum(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return Sum(n - 1) * n;
//	}
//}
//int main()
//{
//	printf("%d\n", Sum(4));
//	system("pause");
//	return 0;
//}

////�ǵݹ鷽��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int m = 1;
//	int n = 1;
//	int i = 1;
//	printf("�����һ��������\n");
//	scanf_s("%d", &n);
//	for (i = 1;i <= n;++i) {
//		m = m * i;
//	}
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen





	















//����Ļ�����9*9�˷��ھ���
//#include<stdio.h>
//int main() {
//	int i, j, result;
//	printf("\n");
//	for (i = 1;i < 10;i++) {
//		for (j = 1;j <= i;j++) {
//			result = i * j;
//			printf("%d*%d=%-3d",i,j, result);//-3d��ʾ����룬ռ��λ
//		}
//		printf("\n");
//		
//	}
//}


//��10 �����������ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a[11];
//	printf("������10��������\n");
//		for (int i = 1;i <= 10;i++) {
//			scanf("%d", &a[i]);
//		}
//		a[0] = a[1];
//	for (int i = 1;i <= 10;i++) {
//		if (a[i] >= a[0])
//			a[0] = a[i];
//		
//	}
//
//printf("%d\n",a[0]);
//system("pause");
//return 0;
//}
