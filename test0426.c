//ɨ����Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]){
	/*for (int row = 0;row < MAX_ROW;row++) {
		for (int col = 0;col < MAX_COL;col++) {
			showMap[row][col] = '*';
			
		}
	}*/
	//mem=>memory �ڴ�
	//set �����ã�����
	//memset�Ĺ��ܾ��ǰ�һ���ڴ��ϵ�ÿ���ֽڶ����ó�һ�������ֵ
	//������ʽת����ָ�룬���Բ�������sizeof�������鳤��
	//��ά�����ÿ��Ԫ�ض�����һ���������ڴ�ռ��ϲ��ֵ�
	memset(showMap, '*', MAX_ROW * MAX_COL);
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	//�������10��λ����Ϊ����
	//�������������
	srand((unsigned int)time(0));
	int mineCount = 0;
	while (mineCount<MINE_COUNT) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		mineCount++;
	}
}

//ϣ����һ��������ͬʱ�߱���ӡ���ֵ�ͼ�Ĺ���
//ȡ����ʵ����ɶ
//�β����ֽ���"map"��̫����.C++��׼������һ��std��map
void print(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0;row < MAX_ROW;row++) {
		for (int col = 0;col < MAX_COL;col++) {
			printf("%c",theMap[row][col]);
		}
		printf("\n");
	}

}

void update(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL], int row, int col) {
	//��ʾ��Χ���׵ĸ���
	int count = 0;
	for(int r = row - 1;r <= row + 1;r++) {
		for (int c = col - 1;c <= col + 1;c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				//��ʱr��c���곬�����̵ķ�Χ��ֱ������
				continue;
			}
			if (r == row && c == col) {
				//����Ҫ�жϣ�ֱ���´�ѭ��
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	//���ֱ�Ӹ�ֵ�Ļ�����ʱ����count��2
	//��ǰrow��colλ�õ�Ԫ�ؾͱ����ó���ASCIIֵΪ2���ַ�
	//������'2'
	// ������������ת��, ֻ�� C ����������ôд��. 
	// �������������������, һ���ǲ����� �ַ����� �� �������� ���л�������
	showMap[row][col] = '0'+count;
}


int main() {
	//������ͼ�����г�ʼ��
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedCount = 0;
	while (1) {
		//2.��ӡ��ͼ
		print(showMap);
		//3.�����������
		//�˴���Ϊ����֤update��������ȷ��
		//�Ȱѵ��׵Ĳ���Ҳ��ӡ����
		int row = 0;
		int col = 0;
		printf("����������(row,col):");
		scanf("%d %d", &row, &col);
		//���кϷ����ж�
		if (row<0 || row>=MAX_ROW || col<0 || col>=MAX_COL) {
			printf("������������������������룡\n");
			continue;
		}
		if (showMap[row][col]!= '*') {
			printf("�������λ���Ѿ������ˣ�\n");
			continue;
		}
		//4.�ж��Ƿ����
		if (mineMap[row][col] == '1') {
			printf("�������ˣ���Ϸ������\n");
			break;
		}
		//5.����showMap����ʾ��ǰλ����Χ�ж��ٸ���
		update(showMap, mineMap, row, col);
		//6.������Ϸʤ�����ж���ͳ�Ƶ�ǰһ�������˶��ٸ�����
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("��ϲ����Ϸʤ����\n");
			break;
		}
	
	}
	
	//print(mineMap);
	system("pause");
	return 0;
}