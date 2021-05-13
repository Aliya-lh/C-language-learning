////14. 函数判断素数
////实现一个函数，判断一个数是不是素数
////利用上面实现的函数打印100-200之间的素数
////程序分析：怎样才算素数 0 1 2都不是素数 
//// 素数：一个大于1的正整数，
//// 如果除了1和它本身外，不能被其他正整数整除，就叫素数。
//#include<stdio.h>
//#include<stdlib.h>
//
//int isPrime(int num) {
//	if (num == 0 || num == 1) {//特殊的，0和1都不是素数
//		return 0;
//	}
//	for (int tmp = 2;tmp < num;tmp++) {//2也不是素数
//		if (num % tmp == 0) {//如果num能被其他正整数整除就不是素数
//			return 0;//返回0
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int i = 101;
//	printf("100到200之间的素数有：");
//	for (int i = 101;i <= 200;i++) {
//		if (isPrime(i)) {
//			printf("%d\n", i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
//	for (i = 101; i <= 200; i++)
//	{
//		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

int isPrime(int num, int tmp) {
	if (num == 0 || num == 1) {
		return 0;
	}
	for (int tmp = 2;tmp < num;tmp++) {
		if (num % tmp == 0) {
			return 0;
		}
		return num;
	}
}
int main(){
	printf ("%d", isPrime(100,200));
	system("pause");
	return 0;
}