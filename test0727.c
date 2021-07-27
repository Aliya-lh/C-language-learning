//汽水瓶问题
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


	//int bottle = 20;//初始的空瓶数
	//int total = 20;//喝到的总的瓶数
	////当空瓶个数达到1个的时候就不再继续往下换
	//while (bottle > 1) {
	//	//这一轮新喝的汽水数
	//	total += bottle / 2;
	//	//下一轮的空瓶数
	//	bottle = bottle / 2 + bottle % 2;
	//}
	//printf("total=%d\n", total);

	system("pause");
	return 0;
}


