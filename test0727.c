//��ˮƿ����
#include<stdio.h>
#include<stdlib.h>

void func() {
	return;
}
int add(int x, int y) {
	return x + y;
}

int main() {
	void(*p)() = func;
	int (*p2)(int, int) = add;

	p = p2;


	//int bottle = 20;//��ʼ�Ŀ�ƿ��
	//int total = 20;//�ȵ����ܵ�ƿ��
	////����ƿ�����ﵽ1����ʱ��Ͳ��ټ������»�
	//while (bottle > 1) {
	//	//��һ���ºȵ���ˮ��
	//	total += bottle / 2;
	//	//��һ�ֵĿ�ƿ��
	//	bottle = bottle / 2 + bottle % 2;
	//}
	//printf("total=%d\n", total);

	system("pause");
	return 0;
}


