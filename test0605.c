//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

////�ַ�������
////ʵ��һ�����������������ַ����е�k���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
////����������Ƚ�Ҫ������ǰ�����һ�����CBADEFG����Ȼ�󽫺���Ҳ����CBAGFED����
////�����������DEFGABC�����ɡ�����ֻ��Ҫ����ֵ��������.
//#include<stdio.h>
//
//void reversePart(char* str, int start, int end) {
//	//���ַ���start��end��һ������
//	int i = 0;
//	int k = 0;
//	char tmp = 0;
//	for (i = start, k = end;i < k;i++, k--) {
//		tmp = str[i];
//		str[i] = str[k];
//		str[k] = tmp;
//	}
//}
//
//void leftRound(char* src, int time) {
//	int len = strlen(src);
//	int pos = time % len;
//	reversePart(src, 0, pos - 1);//����ǰ��
//	reversePart(src, pos, len - 1);//������
//	reversePart(src, 0, len - 1);//��������
//}
//int main() {
//	char str[] = "ABCDEFG";
//	
//	return 0;
//}


////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int findRound(const char* src, char* find) {
//	char tmp[256] = { 0 };//��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src);//�ȿ���һ��
//	strcat(tmp, src);//������һ��
//	return strstr(tmp, find) != NULL;//�����Ҳ��ҵõ�
//}
//
//int main() {
//	printf("%d\n", findRound("AABCD", "BCDAB"));
//	return 0;
//}



//
////���Ͼ���
////��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
////���д�����������ľ����в���ĳ�������Ƿ���ڡ�
////Ҫ��ʱ�临�Ӷ�С��O(N);
//#include<stdio.h>
//
//int findNum(int a[][3], int x, int y, int f) {
//	int i = 0, k = x - 1;
//	while (k >= 0 && i < k) {
//		if (a[i][k] < f) {
//			//���Ҵ������
//			i++;
//		}
//		else if (a[i][k] > f) {
//			//����С������
//			k--;
//		}
//		else return 1;
//	}
//	return 0;
//}
//
//int main() {
//	int a[][3] = { {1,3,5},
//		{3,5,7},
//		{5,7,9} };
//	if (findNum(a, 3, 3, 2)) {
//		printf("It has been found!\n");
//	}
//	else printf("It hasn't been found!\n");
//	return 0;
//}


////���ݵĴ洢
////��ϰ4
//#include<stdio.h>
//int main() {
//
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	//���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//}

////��ϰ5 �����бȽ����׳���Ĵ��룡��
//#include<stdio.h>
//int main() {
//	unsigned int i;//unsigned int���������
//	for (i = 9; i >= 0; i--)
//	{//�������ѭ��
//		printf("%u\n", i);
//	}
//}
////���Ƶģ�
//unsigned int a = 10;
//unsigned int b = 20;
//a - b;//Ҳ�����

////��ϰ6
//#include<stdio.h>
//int main() {
//	char a[1000];//�ַ�����
//	int i;
//	for (i = 0;i < 1000;i++) {
//		//�漰����ת��������
//		//��int��ֵ��char�ᷢ���ضϣ� 
//		// -1�Ĳ���Ϊ
//		// 1111 1111 1111 1111 1111 1111 1111 1111 
//		// 0000 0000 0000 0000 0000 0000 1111 1111=>255
//		// ���Ϊ
//		// 1111 1111 1111 1111 1111 1111 0000 0000 =>תΪchar����\0
//		//Ҳ����iΪ255ʱ������-1-255=>(char)\0
//		//�൱�ڸ��±�Ϊ255�������λ����Ϊ\0
//		//��ʱ���ַ����ĳ��� 255
//		a[i] = -1 - i;
//		
//	}
//	printf("%d", strlen(a));
//	return 0;
//}



//��ϰ8
#include <stdio.h>
unsigned char i = 0;
int main()
{
	for (i = 0;i <= 255;i++)
	{
		printf("hello wolrd\n");
	}
	return 0;
}
