//struct A {
//	int id;
//};
//struct B {
//	struct A a;
//};
//struct C {
//	struct B* b;
//};
//int main() {
//	struct C c;
//	c.b->a.id;
//}

//29. ���������������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299 ������� : 7
//#include<stdio.h>
//#include<stdlib.h>
//
//int bitDiffCount(int a, int b) {
//	//1.�Ȱ�a^b
//	int tmp = a ^ b;
//	//2.ͳ�ƽ���У�1�ĸ�������
//	int count = 0;
//	for (int i = 0;i < 32;i++) {
//		if (tmp & (1 << i)) {
//			count++;
//		}
//	}
//	return count;
//}
//
//int main() {
//	printf("%d\n", bitDiffCount(1999, 2299));
//	system("pause");
//	return 0;
//}


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