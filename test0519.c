//����Ļ�ϴ�ӡ������ǡ�
//1
//
//1 1
//
//1 2 1
//
//1 3 3 1
//
//����
//����������������ֹ���Ϊ��d[i][j] = d[i - 1][j] + d[i - 1][j - 1]
#include<stdio.h>
#include<stdlib.h>

void yangHuiTriangle(int n) {
	int data[30][30] = { 1 };//��һ��ֱ�����
	int i, k;
	for ( i = 1;i<n;i++) {//�ӵڶ��п�ʼ��
		data[i][0] = 1;//ÿ�еĵ�һ�ж�û������
		//ֱ����1����֤����Խ��
		for (k = 1;k <= i;k++) {//�ӵڶ��п�ʼ��
			data[i][k] = data[i - 1][k] + data[i - 1][k - 1];
			//���ƹ�ʽ
		}
	}
	for (i = 0;i < n;i++) {
		for (k = 0;k <= i;k++) {
			printf("%d ", data[i][k]);
		}
		putchar('\n');
	}
}
int main() {
	yangHuiTriangle(20);
	system("pause");
	return 0;
}