////���9*9�˷��ھ�
//#include<stdio.h>
//int main() {
//	int result=0;
//	for (int i = 1;i < 10;i++) {
//		for (int k = 1;k <= i;k++) {
//			result = i * k;
//			printf("%d*%d=%-3d", i, k, result);
//
//		}
//		printf("\n");
//	}
//}

#include<stdio.h>
#include<stdlib.h>
void swap(int a, int b) {
	int t;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	printf("�Զ��庯����a��bֵ��\n a=%d b=%d\n", a, b);
}
int main() {
	int a,b;
	void swap(int a, int b);
	scanf_s("%d%d", &a, &b);
	swap(a, b);
	printf("���յ�a��bֵ��\n a=%d b=%d\n", a, b);
	system("pause");
	return 0;

}