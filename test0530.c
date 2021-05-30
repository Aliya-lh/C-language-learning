//求一个3*3的矩阵对角线元素之和
//程序分析：利用双重for循环控制输出二维数组，再将a[i][k]累加后输出
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 3
int main() {
	int i, k;
	int a[N][N] = { 0 };
	int sum = 0;
	printf("请输入矩阵（3*3）：\n");
	for (int i = 0;i < N;i++) {
		for (int k = 0;k < N;k++) {
			scanf("%d", &a[i][k]);
		}
	}
	for (i = 0;i < N;i++) {
		sum += a[i][i];
	}
	printf("对角线之和为：%d\n", sum);
	return 0;
}