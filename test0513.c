////14. �����ж�����
////ʵ��һ���������ж�һ�����ǲ�������
////��������ʵ�ֵĺ�����ӡ100-200֮�������
////��������������������� 0 1 2���������� 
//// ������һ������1����������
//// �������1���������⣬���ܱ������������������ͽ�������
//#include<stdio.h>
//#include<stdlib.h>
//
//int isPrime(int num) {
//	if (num == 0 || num == 1) {//����ģ�0��1����������
//		return 0;
//	}
//	for (int tmp = 2;tmp < num;tmp++) {//2Ҳ��������
//		if (num % tmp == 0) {//���num�ܱ����������������Ͳ�������
//			return 0;//����0
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int i = 101;
//	printf("100��200֮��������У�");
//	for (int i = 101;i <= 200;i++) {
//		if (isPrime(i)) {
//			printf("%d\n", i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	// ���ѭ��������ȡ100~200֮����������ݣ�100�϶��������������i��101��ʼ
//	for (i = 101; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ��������[2, i)֮���ÿ������ȥ��i����ֻҪ��һ�����Ա���������������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		// ����ѭ������֮�����j��i��ȣ�˵��[2, i��֮����������ݶ����ܱ�i��������iΪ����
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

int isPrime(int num, int tmp) {
	if (num == 0 || num == 1) {
		return 0;
	}
	for (int tmp = 2;tmp < num;tmp++) {
		if (num % tmp == 0) {
			return 0;
		}
		return num;
	}
}
int main(){
	printf ("%d", isPrime(100,200));
	system("pause");
	return 0;
}