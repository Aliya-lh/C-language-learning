////ʵ��һ���������ж�һ�����ǲ���������
////��������ʵ�ֵĺ�����ӡ100��200֮�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int primeNum(int num) {
//	int i, tmp;
//	tmp = sqrt(num);
//	for (int tmp = 100;tmp <= 200;tmp++) {
//		int i = 0;
//		for (i = 2;i <= tmp;i++) {
//			if (num % i == 0) {
//				return 0;
//			}
//			return 1;
//		}
//	}
//}
////������
//int main() {
//	int i;//��������������
//	scanf("%d", &i);
//	if (primeNum(i)) {
//		printf("������");
//	}
//	else {
//		printf("��������");
//
//	}
//	system("pause");
//	return 0;
//
//}


////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int chengFa(int num) {
//	for (int  i= 1; i<= num;i++) {
//		for (int k = 1;k <= i; k++) {
//			printf("%d*%d=%d", i, k, i * k);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	chengFa(n);
//	return 0;
//
//}
//
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
////����5678 ���5 6 7 8
// #include<stdio.h>
//void printNum(unsigned int num) {
//	if (num > 9) {
//		printNum(num / 10);
//	}
//	printf("%d", num % 10);
//}
//int main() {
//	printNum(5678);
//
//}

//
////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////�ݹ鷽��
//#include<stdio.h>
//int myStrlen(char* str) {
//	if (str[0] == '\0') {//˵��û�кϷ��ַ�������
//		return 0;
//	}
//	return 1 + myStrlen(str + 1);
//}
//int main() {
//	printf("%d\n", myStrlen("abcd"));
//	return 0;
//}

////�ǵݹ� ѭ��
//#include<stdio.h>
//int myStrlen(char str[]) {
//	int count = 0;
//	while (str[count] != '\0') {
//		count++;
//	}
//	return count;
//}
//int main() {
//	printf("%d\n", myStrlen("abcd"));
//}


////��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������У����������ӡ��
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
////���磺
////char arr[] = "abcdef";
////����֮����������ݱ�ɣ�fedcba
////�㷨˼�룺��"abcdef"Ϊ��
////��һ�� ��a���浽temp��
////�ڶ��� ��f�ŵ�a��λ��
////������ f����д'\0'
////���Ĳ� ����bcde�ĳ��� ���bcde�ĳ��ȴ���1��������
////���岽 ��a�ŵ�f��λ��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(char* str);
//int main(void) {
//	char str[100];
//
//	printf("�����������ѯ���ַ���\n");
//	scanf("%s", str);
//	print(str);
//	printf("\n");
//	return 0;
//}
//
//void print(char* str) {
//	char c = *str;
//	if (c != '\0') 
//		print(str + 1);
//	if (c != '\0') 
//		printf("%c", c);
//	}
//



////����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////���룺1729�������19
//#include<stdio.h>
//int DigitSum(int x) {
//	if (x > 9) {
//		return x % 10 + DigitSum(x / 10);
//	}
//	else {
//		return x;
//	}
//}
//int main() {
//	int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//
//}
//


////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
////���������
//// k=0ʱ��n^k=1;
////k!=0ʱ��n*(n^(k-1))
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int power(int n,int k) {
//	if (k <= 0) {
//		return 1;
//	}
//	return n * power(n,k - 1);
//	}
//int main() {
//	int n;
//	int k;
//	scanf("%d%d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�����������Ϸ����
#include<stdio.h>
int main() {

}

//��ά�����ʹ��
int main() {
	//�ڴ��еĲ���ֵ
	/*int arr[3][4] = { 1,2,3,4,5 };*/
	/*int arr [3][4] = {
		{1,2},
		{3,4},
		{5}
	};*/
	int arr[3][4] = {
		2,4,5
	};
	for (int row = 0;row < 3;row++) {
    //��������൱��ȡ�����е�ĳһ�У���һ��Ҳ��һ������
	//arr[row]
		for (int col = 0;col < 4;col++) {
			printf("%d", arr[row][col]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}