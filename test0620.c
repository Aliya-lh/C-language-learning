#include<stdio.h>
//#include<stdlib.h>
//
////这个代码的含义就是把编译器默认对齐数改为2
//#pragma pack(2)
//struct A {
//	char a;// a的对齐数是1
//	int b; // b的对齐数是2 min（4，2）
//	char c;// c的对齐数是1
//};
//
//#pragma pack()//此处加上这个相当于还原默认对齐数
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




//枚举
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
//按理说，Sex和Week这两个概念是不相干的
//但是在C语言中，因为大家都被视为int，就可以混淆使用
int main() {
	enum Sex s = MALE;
}