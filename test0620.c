#include<stdio.h>
//#include<stdlib.h>
//
////�������ĺ�����ǰѱ�����Ĭ�϶�������Ϊ2
//#pragma pack(2)
//struct A {
//	char a;// a�Ķ�������1
//	int b; // b�Ķ�������2 min��4��2��
//	char c;// c�Ķ�������1
//};
//
//#pragma pack()//�˴���������൱�ڻ�ԭĬ�϶�����
//int main() {
//	struct A structA;
//	printf("%p\n", &structA);
//	printf("%p\n", &structA.a);
//	printf("%p\n", &structA.b);
//	printf("%p\n", &structA.c);
//	printf("%d\n", sizeof(structA));
//	system("pause");
//	return 0;
//}




//ö��
enum Sex {
	MALE,
	FEMALE,
	UNKNOW
};

enum Week {
	Monday,
	Tuesday,
	Wednesday,
};
//����˵��Sex��Week�����������ǲ���ɵ�
//������C�����У���Ϊ��Ҷ�����Ϊint���Ϳ��Ի���ʹ��
int main() {
	enum Sex s = MALE;
}