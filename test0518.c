//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//������ѧ֪ʶ�ɵã�money*2-1 ���Ȳ����У�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//����2
	if (money <= 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("total = %d\n", total);


	return 0;
}