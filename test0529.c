//31. 统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int countOneBits(unsigned int num) {
	int count = 0;
	while (num != 0) {
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main() {
	unsigned int num = 0;
	printf("请输入：");
	scanf("%d", &num);
	printf("%d\n", countOneBits(num));
	return 0;
}