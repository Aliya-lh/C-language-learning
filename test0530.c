//��һ��3*3�ľ���Խ���Ԫ��֮��
//�������������˫��forѭ�����������ά���飬�ٽ�a[i][k]�ۼӺ����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 3
int main() {
	int i, k;
	int a[N][N] = { 0 };
	int sum = 0;
	printf("���������3*3����\n");
	for (int i = 0;i < N;i++) {
		for (int k = 0;k < N;k++) {
			scanf("%d", &a[i][k]);
		}
	}
	for (i = 0;i < N;i++) {
		sum += a[i][i];
	}
	printf("�Խ���֮��Ϊ��%d\n", sum);
	return 0;
}