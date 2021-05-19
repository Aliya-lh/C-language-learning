//在屏幕上打印杨辉三角。
//1
//
//1 1
//
//1 2 1
//
//1 3 3 1
//
//……
//程序分析：发现数字规律为：d[i][j] = d[i - 1][j] + d[i - 1][j - 1]
#include<stdio.h>
#include<stdlib.h>

void yangHuiTriangle(int n) {
	int data[30][30] = { 1 };//第一行直接填好
	int i, k;
	for ( i = 1;i<n;i++) {//从第二行开始填
		data[i][0] = 1;//每行的第一列都没有区别
		//直接填1，保证不会越界
		for (k = 1;k <= i;k++) {//从第二列开始填
			data[i][k] = data[i - 1][k] + data[i - 1][k - 1];
			//递推公式
		}
	}
	for (i = 0;i < n;i++) {
		for (k = 0;k <= i;k++) {
			printf("%d ", data[i][k]);
		}
		putchar('\n');
	}
}
int main() {
	yangHuiTriangle(20);
	system("pause");
	return 0;
}