//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int num = 0x11223344;
//	//char str[] = "abc";//������ռ4���ֽ�
//	system("pause");
//	return 0;

////���һ��С�������жϵ�ǰ�������ֽ���
//
//#include<stdio.h>
//#include<stdlib.h>
////����Ǵ���ֽ��򣬾ͷ���1�����򷵻�0
//int isBigEnd() {
//	int num = 0x11223344;
//	int* p = &num;
//	//���ָ��֮���ǿ������ת������Ӱ��ָ���ڲ��洢�ĵ�ֵַ
//	//ֻӰ����������ô���������ַ���ڴ�ĳ��ȵ����
//	char* p2 = (char*)p;
//	if (*p2 == 0x11) {
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	printf("%d\n", isBigEnd());
//	system("pause");
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//
//	system("pause");
//	return 0;
//}

////�������
//// ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//// ���磺2+22+222+2222+22222
//#include<stdio.h>
//#include<stdlib.h>
//void func() {
//	int sum = 0;
//	//��������Ҫ�ܹ��������ѭ��
//	// cur��ʾ��ǰ��ĳһ��
//	int cur = 0;
//	for (int i = 1;i <= 5;i++) {
//		cur = cur * 10 + 2;
//		sum += cur;
//	}
//	printf("sum=%d\n", sum);
//}
//
//int main() {
//	func();
//	system("pause");
//	return 0;
//}


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
		sum += pow(tmp, n);
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