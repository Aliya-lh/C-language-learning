////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ����
////���λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
////��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int i, x, y, z;
//	for (i = 100;i < 1000;i++) {
//		x = i % 10;//�����λ����
//		y = i / 10 % 10;//���ʮλ����
//		z = i / 100 % 10;//�����λ����
//		if (i == (x * x * x + y * y * y + z * z * z)) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

////�ú�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int shuixianhuaNum(int num) {
//	int a, b, c, result = 0;
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100 % 10;
//	if (num = a * a * a + b * b * b + c * c * c) {
//		result = 1;
//
//	}
//	return result;
//}
//
//int main() {
//	int i, m, n, a;
//	scanf("%d%d", &m, &n);
//	for (i = m;i < n;i++) {
//		a = shuixianhuaNum(i);
//		if (a) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

////��ӡ����
////������������ɣ��ɼ�����������n��n<30)������Ϊ2*��n+1��
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (i = 0;i < line;i++) {
//		//��ӡһ��
//		//��ӡ�ո�
//		int k = 0;
//		for (k = 0;k < line - 1 - i;k++) {
//			printf(" ");
//		}
//		//��ӡ*
//		for (k = 0;k < 2 * i + 1;k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°벿��
//	for (i = 0;i < line - 1;i++) {
//		//��ӡһ��
//		int k = 0;
//		for (k = 0;k <= i;k++) {
//			printf(" ");
//		}
//		for (k = 0;k < 2 * (line - 1 - i) - 1;k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
////���磺2 + 22 + 222 + 2222 + 22222
//// �����������i���е�i������a�����ԣ������i��Ϊtmp�����i+1��Ϊtmp*10+a
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	printf("��ֱ��������ֺ�������\n");
//	scanf("%d%d", &a, &n);
//	for (i = 0;i < n;i++) {
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}



//дһ����������������һ���ַ��������ݡ�
//ע�⣡�����������ӡ
#include<stdio.h>
#include<stdlib.h>

void Reverse(char* arr) {
	//��������ָ�룬һ��ָ���ַ�����λ��һ��ָ���ַ���ĩλ
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right) {
		//���������ߵ�ֵ�����ڵݽ�
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main() {
	char arr[] = "abcdef521";
	printf("����ǰ��%s\n", arr);
	Reverse(arr);
	printf("�����%s\n", arr);
	system("pause");
	return 0;
}
