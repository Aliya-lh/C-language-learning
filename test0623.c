////������
////IP��ַ�ı�ʾ
//#include<stdio.h>
//union IPAddress {
//	//������������͵���һ������������
//	unsigned int data;
//	//���˿����͵����ĸ��Ƚ�С������
//	struct IP {
//		unsigned char a;
//		unsigned char b;
//		unsigned char c;
//		unsigned char d;
//	}ip;
//};
//int main() {
//	return 0;
//}


////дһ���������������Ǵ�˻���С��
//#include<stdio.h>
//
////����1
////ʹ��ָ��ǿ������ת��
////int isBigEnd() {
////	int num = 0x11223344;
////	int* p = &num;
////	char* p2 = (char*)p;
////	if (*p2 == 0x11) {
////		return 1;
////	}
////	return 0;
////}
//
////����2
////ʹ��������
//int isBigEnd() {
//	union Un {
//		int num;
//		char num2;
//	}u;
//	u.num = 0x11223344;
//	if (u.num2 == 0x11) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int ret = isBigEnd();
//	printf("%d\n", ret);
//	return 0;
//}


//дһ��������ʵ��"ͨѶ¼"����
//����֮ǰ�������������
//1.��һ��ҳ����ʾ��Ϣ������̨
//2.����һЩ��ϵ����Ϣ��ÿ����ϵ�˰������������绰
//3.ʵ�ֶ�������ϵ�˵�������ϵ�ˣ��鿴������ϵ�ˣ��������ֲ���ĳ����ϵ�� ��ɾ����ϵ�ˣ��޸���ϵ����Ϣ...
#include<stdio.h>
typedef struct PersonInfo {
	char name[1024];
	char phone[1024];
}PersonInfo;

typedef struct AddressBook {
	PersonInfo persons[200];
	//ͨ��size���������ʾpersons������ʵ�ʵ���ЧԪ�صĸ���
	//[0,size����Χ��Ԫ������Ч��Ԫ��
	int size;
}AddressBook;

void init(AddressBook* addressBook) {
	//��ÿһ��Ԫ�ض�����Ϊ0
	memset(addressBook->persons, 0, sizeof(addressBook->persons));
	addressBook->size = 0;
}

int main() {
	//����main�����д���������ṹ�������
	AddressBook addressBook;
	//�������ṹ��������г�ʼ��
	init(&addressBook);
	return 0;
}