//�����Ŀ��ϰ����
//1. дһ�����������������Ľϴ�ֵ
//�磺���룺10 20 ����ϴ�ֵ��20
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Max(int x,int y){//����max����������ֵΪ����int���β�x��yҲΪ����
	int z;
	if (x > y) {
		z = x;
	}
	else {//��̫��������д
		z = y;
	}
	return z;
}
int main() {
	int Max(int x, int y);//�Ա����ú���max������
	//��main����λ������ʱ����ʡ����һ����
	int a, b, c;//�������a��b��c
	scanf("%d%d", &a, &b);//�������a,b��ֵ
	c = Max(a, b);//�������ã�����max��ֵ�����õ���ֵ����c
	printf("max=%d\n", c);
	system("pause");
	return 0;
}


//��������д���������ã�
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
	int Max(int x, int y);//�Ա����ú���max������
	//��main����λ������ʱ����ʡ����һ����
	int a, b, c;//�������a��b��c
	scanf("%d%d", &a, &b);//�������a,b��ֵ
	c = Max(a, b);//�������ã�����max��ֵ�����õ���ֵ����c
	printf("max=%d\n", c);
	system("pause");
	return 0;
}




//2.д���뽫�����������Ӵ�С�����
//���磺���룺2 3 1 �����3 2 1
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





//3.��ӡ3�ı������� (дһ�������ӡ1 - 100֮������3�ı���������)
#include<stdio.h>
#include<stdlib.h>

void print3() {
	for (int i = 1;i <= 100;i++) {// ǰ�պ�д��ֻ�ǽ��飬��ȡ���ʡ������д��
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
}
int main() {
	print3();
	system("pause");

}




// 4. ���������������������������Լ��
//���磺���룺20 40 �����20
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




//5. ��ӡ����(��ӡ1000�굽2000��֮�������)
#include <stdio.h>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж�year�Ƿ�Ϊ����
		if (year % 4 == 0)  // ���year�ܹ���4������year����Ϊ����
		{
			if (year % 100 != 0) // ���year������100��������һ��������
			{
				printf("%d ", year);
			}
		}
		if (year % 400 == 0)  // ÿ400������һ��
		{
			printf("%d ", year);
		}
	}


	return 0;
}




//6. ��ӡ����(дһ�����룺��ӡ100~200֮�������)
int main()
{
	int i = 0;
	int count = 0;


	// ���ѭ��������ȡ100~200֮����������ݣ�100�϶��������������i��101��ʼ
	for (i = 101; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ��������[2, i)֮���ÿ������ȥ��i����ֻҪ��һ�����Ա���������������
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}

		// ����ѭ������֮�����j��i��ȣ�˵��[2, i��֮����������ݶ����ܱ�i��������iΪ����
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}


//����������ȱ�ݣ�����iһ������ݣ��϶�����i�ı������������������û����������㣬��˿��Բ�������
// ��ʽ�����Ż�
// ��������ÿ�õ�һ�����ݣ�ֻ��Ҫ����䣺[2, i/2]�������Ƿ���Ԫ�ؿ��Ա�2i�������ɣ�����˵��i��������
int main()
{
	int i = 0;//
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1
		int j = 0;
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//...
		if (j > i / 2)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}




/*
���������ǰ�����һЩ�ظ������ݣ����Ż���
���i�ܹ���[2, sqrt(i)]֮�������������������i��������
ԭ����� m �ܱ� 2 ~ m-1 ֮����һ������������������ӱض���һ��С�ڻ����sqrt(m)����һ�����ڻ���� sqrt(m)��
*/
int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//...
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}


//����4
/*
�����Է������Ż���ֻҪi����[2, sqrt(i)]֮����κ�������������i������������ʵ���ڲ���ʱi���ô�101�𽥵�����200����Ϊ����2��3֮�⣬�����������������ڵ�����ͬʱΪ����
*/


int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i += 2)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//...
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\ncount = %d\n", count);
	return 0;
}




//7. ��дһ��������һ��1-100������������9�ĸ���
//˼·����9��β������9 19 29 39 49 59 69 79 89
//9��Ϊʮλ������91 92 93 94 95 96 97 98
//�����99����������9
// ��20��
//���������ȡ��������ֵĸ�λ��ʮλ���ֱ��ж�һ�¿��ǲ���9����~
//ȡ����λ��num % 10  ȡ��ʮλ��num/10  ȡ����λ��num/100
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




//8. ������ͣ�����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�������
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





//9. �����ֵ����10 �����������ֵ��
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





//10. �˷��ھ�������Ļ�����9*9�˷��ھ���
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




//11. ��������Ϸ
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
	srand((unsigned int)time(0));
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
		}
		else {
			printf("������������\n");
		}
	}
	system("pause");
	return 0;
}




//12. ���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
#include <stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);//���������е�Ԫ��

	int left = 0;//��������������±�
	int right = sz - 1;//�������ұ������±�

	while (left <= right)//��ֹ����
	{
		int mid = (left + right) / 2;//mid���м������±�
		if (arr[mid] > k) {
			right = mid - 1;//�м�����k�ұߣ����ҷ�Χ��Ϊ����ߵ������м���ǰһ����֮��
		}
		else if (arr[mid] < k) {
			left = mid + 1;//�м�����k����ߣ����ҷ�Χ��Ϊ�м�����һ���������ұߵ���֮��
		}
		else {
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)//������ң�������
	{
		printf("�Ҳ�����\n");
	}
	return 0;

}


//��������д
//дһ��������ʵ��һ��������������Ķ��ֲ���
//����arr��ʾ�����ҵ�����
//toFind��ʾҪȥ��������
//�β������int arr[]�Ѿ�����һ�������ˣ���ʽת������һ��ָ��
//int*

 #include<stdio.h>
int binarySearch(int* arr, int size,int toFind) {
	int left = 0;
	int right = size-1;
	//[left,right]������һ��������
	//ֻҪ������䲻Ϊ�գ�����Ҫ���в���
	while (left <= right) {
		int mid = (left + right) / 2;
		if (toFind < arr[mid]) {
			//ȥ������
			right = mid - 1;
		}else if (toFind>arr[mid]) {
			//ȥ�Ҳ����
			left = mid + 1;
		}else {
			//�ҵ��� �˴�����ʹ�ú�������ֵ��ʾ�ҵ���Ԫ�ص��±�λ��
			//��ò�Ҫֱ��printf
			//����Ҳ��֪�������ߵ��������õ����֮��զ��
			//�������������Ҫ��ӡ��Ҳ��������Ҫ��¼�ļ���Ҳ�����ǲ�����������
			//��Щ������binarySesrch�����������Ӧ�ÿ��ǵ�����
			//һ������ֻ��һ�����飡��
			return mid;
		}
	}
	//��������ѭ�����Ҳû�ҵ����ʵ�Ԫ�أ���Ϊû�ҵ�
	//����һ����Ч���±꣬ͨ�����Ƿ���-1
	return -1;
	
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int size= sizeof(arr) / sizeof(arr[0]);
	//C�����������鳤�Ⱥ���������ĵ����÷�
	int ret=binarySearch(arr,size,6);
	printf("ret=%d\n", ret);
}





//13. ɨ����Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
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
	while (mineCount < MINE_COUNT) {
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
			printf("%c", theMap[row][col]);
		}
		printf("\n");
	}

}

void update(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL], int row, int col) {
	//��ʾ��Χ���׵ĸ���
	int count = 0;
	for (int r = row - 1;r <= row + 1;r++) {
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
	showMap[row][col] = '0' + count;
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
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("������������������������룡\n");
			continue;
		}
		if (showMap[row][col] != '*') {
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




//14. �����ж�����
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//�ж�һ�����ǲ�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



#include<stdlib.h>
int prime(int n) {
	int i;
	if (n < 2) {
		printf("%d��������", n);
	}
	else {
		for (i = 2;i < n;i++) {//�ж�n��2~n-1����û������
			if (n % i == 0)//����ÿ��Գ����������������
				break;
		}
	}if (i < n) {//��2~n-1֮��������
		printf("%d��������\n", n);
	}
	else
		printf("%d������\n", n);

	return 0;
}


int main() {
	int n;
	printf("������һ������\n");
	scanf("%d", &n);
	prime(n);
	system("pause");
	return 0;
}

//��������д
//дһ�������ж�һ�����ǲ�������
//����ֵ�趨Ϊint  �������ͷ���1�����������ͷ���0
//is it a prime num?
//
#define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
int isPrime(int num){
	if (num==0||num == 1) {
		return 0;
	}
	for (int tmp = 2;tmp < num;tmp++) {
		if (num % tmp== 0) {
			//������������ҵ������ˣ�����
			return 0;
		}
	}
	//ѭ������Ҳû�ҵ���������ǰ����Ϊ������
	return 1;
}
int main(){
	int i=101;
	printf("100��200֮��������У�");
	for (int i = 101;i <= 200;i++) {
		if (isPrime(i)) {
			printf("%d ", i);

		}
	}
	return 0;
}





//15. �����ж�����
//ʵ�ֺ����ж�year�ǲ������ꡣ
 #include<stdio.h>
int isLeapYear(int year) {
	if (year % 100 == 0) {//��������
		if (year % 400 == 0) {
			return 1;
		}
		return 0;
	}else {
		if (year % 4 == 0) {
			return 1;
		}
		return 0;
		}
		//��ͨ����
	}


int main() {
	printf("%d\n", isLeapYear(1984));
}





//16. ������������ 
//ʵ��һ�������������������������ݡ�





//17. �˷��ھ���
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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




//18. ��ӡһ������ÿһλ
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//�ݹ�
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//����:1234 �����1 2 3 4
#include<stdio.h>
void printNum(unsigned int num) {
	if (num > 9) {
		printNum(num / 10);
	}
	printf("%d", num % 10);
}
int main() {
	printNum(1234);

}





//19. ��׳� n!
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ鷽��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Sum(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return Sum(n - 1) * n;
	}
}
int main()
{
	printf("%d\n", Sum(5));
	system("pause");
	return 0;
}

//�ǵݹ鷽��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int m = 1;
	int n = 1;
	int i = 1;
	printf("�����һ��������\n");
	scanf_s("%d", &n);
	for (i = 1;i <= n;++i) {
		m = m * i;
	}
	printf("%d\n", m);
	system("pause");
	return 0;
}




20. strlen��ģ�⣨�ݹ�ʵ�֣�
�ݹ�ͷǵݹ�ֱ�ʵ��strlen




//21. �ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���ַ������򣬲��������ӡ����
//�ǵݹ鷽��
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char str[]) {
	int left = 0;//�ȴ���һ��left=0���ʼԪ�ص��±꣩
	int right = strlen(str) - 1;//���һ��Ԫ�ص��±�
	while (left < right) {//���������ͽ���left��rightλ�õ�Ԫ��
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main() {
	char str[] = "abcd";
	reverseString(str);
	printf("%s\n", str);
	system("pause");

}


//�õݹ鷽���������ⲻ�ʺ��õݹ飬�Ƚϸ��ӣ�
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString2(char str[]) {
	//��ȥ�������������Ե���ַ���Ȼ��ݹ鴦���м���ַ���
	//Ϊ��֪���Ҳ�ı�Ե���ַ���ɶ������Ҫ��֪���ַ����ĳ���
	int len = strlen(str);
	if (len == 0 || len == 1) {
		return;
	}
	//������Ե��Ԫ��
	char tmp = str[0];
	str[0] = str[len - 1];

	str[len - 1] = '\0';//ע�⣡���õ�Ʋ�ţ���
	//���������һ����ʱ�ԵĲ�����Ŀ����Ϊ�����м�ġ�bcde������Ϊһ���������ַ���

	//�ݹ���������м䲿�ֵ��ַ�����
	//Ϊ�˵õ��м䲿�ֵ��ַ�������Ҫ��������
	//str+1���õ��м��ַ�������ʼλ��
	//����Ҫ�Ѹղŵ�len-1  f  ��λ������Ϊ\0

	//���еݹ����
	reverseString2(str + 1);
	//�ղ�����ʱ��len-1 ��λ����Ϊ\0��
	//���ݹ�����󣬻���Ҫ��len -1 ��λ�û�ԭ�ɺ����ֵ
	str[len - 1] = tmp;
}


int main() {
	char str[] = "abcdef";
	reverseString2(str);
	printf("%s\n", str);
	system("pause");
}





//22. ����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//�ݹ鷽��
#include<stdio.h>
#include<stdlib.h>

int digitSum(unsigned int num) {
	//1.��ȷ���������������ʲô�ģ��ֱ�ȡ���������ÿһλ�������ۼ�
	//2.�ҳ�����������������num==0ʱ����������
	//3.�ҳ��ȼ۹�ϵʽ����λ+�ݹ鴦��ʣ���λ
	//num%10+digitSum��num/10)  ���磺1792=> 1 + 179
	if (num == 0) {
		return 0;
	}
	return num % 10 + digitSum(num / 10);
}


int main() {
	printf("%d\n", digitSum(1792));
	system("pause");
	return 0;
}



//�ǵݹ鷽��
#include<stdio.h>
#include<stdlib.h>

int digitSum(unsigned int num) {
	//ֻҪȡ��ÿһλ�������ۼӼ���
	int sum = 0;
	while (num != 0) {
		//ȡ����λ
		printf("%d\n", num % 10);
		sum += num % 10;//��sum=sum+num%10;�ȼ�
		num /= 10;//��num=num/10;�ȼ�
	}
	return sum;



}

int main() {
	int ret = digitSum(1792);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}



//23. �ݹ�ʵ��n��k�η�
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//�ݹ鷽��
#include<stdio.h>
#include<stdlib.h>

int myPower(int n, int k) {
	if (k == 0) {
		return 1;
	}
	return n * myPower(n, k - 1);

}

int main() {
	printf("%d\n", myPower(2, 10));
	system("pause");
	return 0;
}




//24. ����쳲�������
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//�ݹ鷽����
#include<stdio.h>
int fib(int n) {
	if (n == 1 || n== 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	printf("%d\n", fib(2));
	return 0;

}

//�ǵݹ� ͨ��ѭ���ķ�ʽ��
#include <stdio.h>
int fib2(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	//ʹ�ñ���i��ʾ��ǰ��
	int last2 = 1;//i-2��
	int last1 = 1;//i-1��
	int cur = 0;//��ǰ��i��Ľ��
	for (int i = 3;i <= n;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main() {
	printf("%d\n", fib2(5));
	return 0;
}


/





//25. ��������Ϸ����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//char chessBoard[3][3];
//�����3��Ϊmagic number ħ������/ħ������
//����취���ó�������������

void init(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0;row < MAX_ROW;row++) {
		for (int col = 0;col < MAX_COL;col++) {
			chess[row][col] = ' ';

		}
	}
}
void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0;row < MAX_ROW;row++) {
		printf("|");
		for (int col = 0;col < MAX_COL;col++) {
			printf(" %c |", chess[row][col]);
		}
		printf("\n+---+---+---+\n");
	}
}

void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�������......\n");
	while (1) {
		printf("����������(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		// ���кϷ���У��, �ж��û�����������Ƿ��ǺϷ���
		// ������Ϸ�, �����û���������
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			// ���ǲ��Ϸ�, ����Ҫ���û���������
			printf("�����������Ƿ�! ����������!\n");
			continue;
		}
		// �����û�������1, 1, ���� 1 1 λ���Ѿ�������~~ 
		if (chessBoard[row][col] != ' ') {
			// ��λ���Ѿ�������
			printf("�������λ���Ѿ�������, ����������!\n");
			continue;
		}
		// ��������~~
		chessBoard[row][col] = 'x';
		break;
	}
}

void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			//���λ���Ѿ�������
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}

// ���� 1 ��ʾ����, ���� 0 ��ʾû��
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	// ��������, ������û�пո�. �пո����û��~~
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
//�˴�Լ��
//�������x����ʾ��һ�ʤ��
//�������o����ʾ���Ի�ʤ
//�������' ',��ʾʤ��δ�֣���Ҫ��������
//�������ȥq����ʾ����
char isGameOver(char chessBoard[MAX_ROW][MAX_COL]) {
	//ɨ�����е��У����е��У��Լ������Խ���
	for (int row = 0;row < MAX_ROW;row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	// �ж��Ƿ����
	if (isFull(chessBoard)) {
		return 'q';
	}
	// ʤ��δ��
	return ' ';
}
int main() {
	//������ʹ��ȫ�ֱ���
	//������
	char chessBoard[MAX_ROW][MAX_COL];
	//1.�����̽��г�ʼ��
	init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.��ӡ����
		print(chessBoard);
		//3.�������
		playerMove(chessBoard);
		//4.�ж�ʤ��
		// TODO
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// ��Ϸ����
			break;
		}
		//5.��������
		computerMove(chessBoard);
		// 6. �ж�ʤ��
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// ��Ϸ����
			break;
		}
	}

	if (winner == 'x') {
		printf("��ϲ��Ӯ��!\n");
	}
	else if (winner == 'o') {
		printf("��զ���˹����϶��²���!\n");
	}
	else {
		printf("����˹��������忪!\n");
	}

	system("pause");
	return 0;
}




//26. ��������
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

//���������ʵ������Ľ�����
//���ȣ��������飬��main�����н������ֵ���ݸ��ⲿFun����
//��Σ��ⲿFun����ͨ��һ��ѭ�������������ֵ���н���
//�����main�����е���Fun��������ӡ����A��B
#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void Fun(char arr1[], char arr2[]) {
	int i = 0;
	for (i = 0;i < SIZE;i++) {
		//�򵥽���
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main() {
	char arr1[] = { "abcd" };
	char arr2[] = { "dcba" };
	Fun(arr1, arr2);
	//����ַ�����%s
	printf("arr1=%s arr2=%s", arr1, arr2);
	printf("\n");
	system("pause");
	return 0;
}



//27. �������
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//27. �������
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void init(int arr[], int size) {
	for (int i = 0;i < size;i++) {
		arr[i] = 0;
	}
}

void print(int arr[], int size) {
	for (int i = 0;i < size;i++) {
		printf("%d\n", arr[i]);
	}
}

void reverse(int arr[], int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main() {
	int arr[SIZE];
	init(arr, SIZE);
	for (int i = 0;i < SIZE;i++) {
		arr[i] = i;
	}
	reverse(arr, SIZE);
	print(arr, SIZE);

	//��������дinit(arr, sizeof(arr) / sizeof(arr[0]));
	system("pause");
	return 0;
}


//28. ð������
//ʵ��һ�������������ð������
//ð������
#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int size) {
	//дһ�´Ӻ���ǰ�����İ汾
	//ÿ�δӺ���ǰ�����Ƚ�����Ԫ�أ�ÿһ���ܰ���С��ֵ�ŵ���ǰ��
	//bound=>�߽磬ʹ�����������ֵ��ʾ����������ʹ���������ķֽ���
	//[0,bound)����������
	//[bound,size)����������
	int bound = 0;
	for (;bound < size;bound++) {
		//ͨ�����ѭ�������ƺ����Ƚ�����Ԫ�صıȽ�����
		//������ȥʵ��һ�˱ȽϽ����Ĺ���
		for (int cur = size - 1;cur > bound;cur--) {
			//����Ԫ�أ�������curΪ��׼
			//cur-1��cur+1,����cur�Ǵ�size-1��ʼ��
			//�Ͳ���ʹ��cur+1��Ϊ����Ԫ���ˣ�������cur-1
			//�μ������±�һ������Խ�磡��
			if (arr[cur - 1] > arr[cur]) {
				//�����������������ͽ��н���
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;

			}
		}
	}
}
int main() {
	int arr[] = { 9,5,2,7,3,6,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0;i < size;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
}




//29. ���������������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299 ������� : 7

//�����������ͬλ��Ҫ�õ���λ���^����ͬΪ0����ͬΪ1������m��n��λ���m^n��
// ��ʱm��n��ͬ�Ķ�����λ���㣬��ͬ�Ķ����Ʊ���λΪ1
// ͳ�������ɺ�����tmp���Ķ����Ʊ���λ���ж��ٸ�1���ɣ����ð�λ�룩
//����1
#include<stdio.h>
#include<stdlib.h>

int bitDiffCount(int a, int b) {
	//1.�Ȱ�a^b
	int tmp = a ^ b;
	//2.ͳ�ƽ���У�1�ĸ�������
	int count = 0;
	for (int i = 0;i < 32;i++) {
		if (tmp & (1 << i)) {
			count++;
		}
	}
	return count;
}

int main() {
	printf("%d\n", bitDiffCount(1999, 2299));
	system("pause");
	return 0;
}

//����2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int diffBit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp) {//��tmp!=0;�ȼ�
		tmp = tmp & (tmp - 1);//ͳ�������ж��ٸ�1
		count++;
	}
	return count;
}
int main() {
	int m, n;
	while (scanf("%d %d", &m, &n) == 2) {
		printf("%d\n", diffBit(m, n));
	}
	return 0;
}

//ע�⣡��
//tmp=tmp&(tmp-1); �� tmp & (1 << i) �ȼ�



//30. ��ӡ���������Ƶ�����λ��ż��λ
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//��������������������ڼ�����еĴ洢λ��32λ
//������λ�����������ʵ��
//��Ҫ��ӡ����һλ��1���룬�������������
//ͨ����λ������Ҫ��ӡ��λ����1������ܰ���һλ�ɹ���ӡ����Ļ����
#include<stdio.h>
#include<stdlib.h>
void getBits(int num) {
	//ע�⣬��ǰԼ�����ұ���һλΪ��0λ
	for (int i = 1;i < 32;i += 2) {
		if (num & (1 << i)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
	//��ȡ���е�ż��λ
	for (int i = 0;i < 32;i += 2) {
		if (num & (1 << i)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
}

int main() {
	getBits(99);
	system("pause");
	return 0;
}


//#include<stdio.h>
//int main() {
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 31;i >= 1;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30;i >= 0;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	return 0;
//
//}





//31. ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
#include<stdio.h>
int countOneBits(unsigned int num) {
	int count = 0;
	while (num != 0) {
		num = num & (num - 1);//ȥ��������λ���λ��1
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





//32. ����������������������ʱ������
//����������ʱ������������������������
//����������������������ʱ����������������ʱ������������������������
#include<stdio.h>
int main() {
	int a = 520;
	int b = 1314;
	printf("before:\n");
	printf("a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:\n");
	printf("a=%d,b=%d\n", a, b);
	return 0;
}




//33. ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

//�����������������Ԫ�ض���������������Ҫ����һ��int�͵�ָ�룬���α��������е�����Ԫ��
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);//������鳤��
	int* p = arr;//����ָ���������ʼ�����������������������Ԫ�صĵ�ַ
	for (int i = 0;i < size;i++) {
		printf("%d ", *p);//ȡ��p��ָ��λ�õ�Ԫ��
		p += 1;//��ȡ��p����һ��λ��
	}
	system("pause");
	return 0;
}

//Ҳ����д������������ʽ
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int* p = arr;p < arr + size;p += 1) {
		printf("%d ", *p);
	}
	system("pause");
	return 0;
}





//34. �ַ�������
//дһ����������������һ���ַ��������ݡ�





//35. дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//��������
 #include<stdio.h>
void func(int* num) { //��������
	(*num)++;
}

int main() {
	int num = 0;
	func(&num);
	printf("%d\n", num);
}





//��������
//#define SIZE 4 //����ʹ�ú�
//Ҳ����ö��
enum {
	SIZE = 4,
};

#include<stdio.h>
int main() {
	const int n = 4;
	int n = 4;
	int arr[SIZE] = { 0 };
	//Ҳ����ʹ��count
	//int arr[n] = { 0 };
}
#include<stdio.h>
int main() {
	int arr[10] = { 0 };
	//ͨ��ѭ���ķ�ʽ����������鶼����һ��ֵ����1-10
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 1;
	}
	for (int i = 0;i < 10;i++) {
		printf("%d\n", arr[i]);
	}
}



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
	for (i = 1;i < n;i++) {//�ӵڶ��п�ʼ��
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



//ˮ�ɻ���
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int i = 0;
	for (int i = 0;i <= 999999;i++) {
		int count = 1;
		int tmp = i;
		int sum = 0;
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1.���ж����ֵ�λ��
		while (tmp / 10) {
			count++;
			tmp = tmp / 10;
		}
		//2.����ÿһλ�Ĵη���
		tmp = i;
		while (tmp) {
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		//3.�ж�
		if (sum == i)
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//������ѧ֪ʶ�ɵã�money*2-1 ���Ȳ����У�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int money = 0;
	int count = 0;
	scanf("%d", &money);
	if (money <= 0) {
		count = 0;
	}
	else {
		count = money * 2 - 1;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}


////ð������    �����⣡����
////ʵ��һ�������������ð�����򣨴Ӵ�С��
//#include<stdio.h>
//#include<stdlib.h>
//
//void bubbleSort(int arr[], int size) {
//	//��ǰ��������汾
//	//ÿһ���ܰ�����ֵ�ŵ���ǰ��
//	int bound = 0;
//	for (bound = 0;bound < size;bound++) {
//		for (int cur = size - 1;cur > bound;cur--) {
//			if (arr[bound+1] > arr[bound]) {
//				//�����Ͻ������������н���
//				int tmp = arr[bound+1];
//				arr[bound+1] = arr[bound];
//				arr[bound] = tmp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,5,2,7,3,6,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, size);
//	for (int i =0;i < size;i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



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




//���һ��С�������жϵ�ǰ�������ֽ���
#include<stdio.h>
#include<stdlib.h>
//����Ǵ���ֽ��򣬾ͷ���1�����򷵻�0
int isBigEnd() {
	int num = 0x11223344;
	int* p = &num;
	//���ָ��֮���ǿ������ת������Ӱ��ָ���ڲ��洢�ĵ�ֵַ
	//ֻӰ����������ô���������ַ���ڴ�ĳ��ȵ����
	char* p2 = (char*)p;
	if (*p2 == 0x11) {
		return 1;
	}
	return 0;
}

int main() {
	printf("%d\n", isBigEnd());
	system("pause");
	return 0;
}




//�������
// ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
// ���磺2+22+222+2222+22222
#include<stdio.h>
#include<stdlib.h>
void func() {
	int sum = 0;
	//��������Ҫ�ܹ��������ѭ��
	// cur��ʾ��ǰ��ĳһ��
	int cur = 0;
	for (int i = 1;i <= 5;i++) {
		cur = cur * 10 + 2;
		sum += cur;
	}
	printf("sum=%d\n", sum);
}

int main() {
	func();
	system("pause");
	return 0;
}


//��ӡ0~100000֮�����е�ˮ�ɻ��������
//1.���ж���������Ǽ�λ��
//2.ȡ����������е�ÿһλ�����ҽ�����n�η�����
//3.��Ͳ��ҽ����ж�
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calcDecimalCount(int num) {//�ж��Ǽ�λ��
	int count = 0;
	while (num != 0) {
		num /= 10;
		count++;
	}
	return count;
}


int isShuiXian(int num) {
	int oldNum = num;//��¼һ�������num��ֵ
	int n = calcDecimalCount(num);
	//ȡ��ÿһλ�����
	int sum = 0;
	while (num != 0) {
		int tmp = num % 10;
		num /= 10;
		sum += (int)pow(tmp, n);
	}
	//�ж�һ���Ƿ���ˮ�ɻ���
	if (sum == oldNum) {
		return 1;
	}
	return 0;
}

int main() {
	for (int i = 1;i <= 100000;i++) {
		if (isShuiXian(i)) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}



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

δ��ɣ���
//дһ��������ʵ��"ͨѶ¼"����
//����֮ǰ�������������
//1.��һ��ҳ����ʾ��Ϣ������̨
//2.����һЩ��ϵ����Ϣ��ÿ����ϵ�˰������������绰
//3.ʵ�ֶ�������ϵ�˵�������ϵ�ˣ��鿴������ϵ�ˣ��������ֲ���ĳ����ϵ�� ��ɾ����ϵ�ˣ��޸���ϵ����Ϣ...
#include<stdio.h>
typedef struct PersonInfo {
	char name[1024];
	char phone[1024];
}PersonInfo;

typedef struct AddressBook {
	PersonInfo persons[200];
	//ͨ��size���������ʾpersons������ʵ�ʵ���ЧԪ�صĸ���
	//[0,size����Χ��Ԫ������Ч��Ԫ��
	int size;
}AddressBook;

void init(AddressBook* addressBook) {
	//��ÿһ��Ԫ�ض�����Ϊ0
	memset(addressBook->persons, 0, sizeof(addressBook->persons));
	addressBook->size = 0;
}

int menu() {
	printf("============================\n");
	printf("��ӭʹ��ͨѶ¼����\n");
	printf("1.�鿴������ϵ��\n");
	printf("2.������ϵ��\n");
	printf("3.�������ֲ�����ϵ��\n");
	printf("4.ɾ����ϵ��\n");
	printf("5.�޸���ϵ����Ϣ\n");
	printf("============================\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


void showPersonInfo(AddressBook* addressBook) {
	assert(addressBook != NULL);
	//ֻ��Ҫ��ÿ����ϵ����Ϣ��ӡ��������
	printf("�鿴������ϵ��...\n");
	for (int i = 0;i < addressBook->size;i++) {
		printf("[%d] %s\t%s\n", addressBook->persons[i].name);

	}
}

void addPersonInfo(AddressBook* addressBook) {

}

void findPersonInfo(AddressBook* addressBook) {

}

void deletePersonInfo(AddressBook* addressBook) {

}

void updataPersonInfo(AddressBook* addressBook) {

}

//���ݸղŵ���Щ������������ȡ�����еĺ���ָ������
typedef void(*Func)(AddressBook*);

int main() {
	//����main�����д���������ṹ�������
	AddressBook addressBook;
	//�������ṹ��������г�ʼ��
	init(&addressBook);
	//����һ������ָ������
	Func arr[] = {
		NULL,
		showPersonInfo,
		addPersonInfo,
		findPersonInfo,
		deletePersonInfo,
		updataPersonInfo
	};
	while (1) {
		int choice = menu();
		if (choice < 1 || choice >= sizeof(arr) / sizeof(arr[0])) {
			printf("�Ƿ���choice��\n");
			continue;
		}
		arr[choice - 1](&addressBook);


		/*if (choice == 1) {
			showPersonInfo(&addressBook);
		}
		else if (choice == 2) {
			addPersonInfo(&addressBook);
		}
		else if (choice == 3) {

		}*/
		//����д�Ƚϸ��ӣ������ú���ָ������Ż�
	}
	return 0;
}































