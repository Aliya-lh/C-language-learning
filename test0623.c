////联合体
////IP地址的表示
//#include<stdio.h>
//union IPAddress {
//	//给计算机看，就当成一个大整数即可
//	unsigned int data;
//	//给人看，就当成四个比较小的整数
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


////写一个代码区分主机是大端还是小端
//#include<stdio.h>
//
////方法1
////使用指针强制类型转换
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
////方法2
////使用联合体
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


//写一个程序来实现"通讯录"功能
//动手之前，先想清楚需求
//1.有一个页面显示信息，控制台
//2.管理一些联系人信息。每个联系人包含了姓名，电话
//3.实现对若干联系人的新增联系人，查看所有联系人，根据名字查找某个联系人 ，删除联系人，修改联系人信息...
#include<stdio.h>
typedef struct PersonInfo {
	char name[1024];
	char phone[1024];
}PersonInfo;

typedef struct AddressBook {
	PersonInfo persons[200];
	//通过size这个变量表示persons数组中实际的有效元素的个数
	//[0,size）范围的元素是有效的元素
	int size;
}AddressBook;

void init(AddressBook* addressBook) {
	//将每一个元素都设置为0
	memset(addressBook->persons, 0, sizeof(addressBook->persons));
	addressBook->size = 0;
}

int main() {
	//先在main函数中创建出这个结构体变量来
	AddressBook addressBook;
	//针对这个结构体变量进行初始化
	init(&addressBook);
	return 0;
}