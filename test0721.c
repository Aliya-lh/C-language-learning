//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//
//
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)//相当于if((j%2)!=0),也就是当j不能整除2的时候，循环直接结束
//				break;
//			a++;
//		} 
//		a++;
//	} 
//	printf("%d\n", a);
//
//
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	for (k = 0; k < 4; k++) {
//		q[k] = &a[k * 3];
//	} 
//		printf("%d\n", q[3][1]);
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}
//


////在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个
////函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。时间复杂度 O(row + col)
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	//数组样例：
//	int arr[4][4] = {
//	1,2,8,9,
//	2,4,9,12,
//	4,7,10,13,
//	6,8,11,15
//	};
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1, sum = 0;
	while (i < 10) {
		sum = sum + 1;
		i++;
	} 
	printf("i=%d,sum=%d"，i, sum);






	//int a = 5;//给a赋值5
	//if (a = 0)//重新给a赋值0
	//{
	//printf("%d", a - 10);
	//} 
	//else {
	//	printf("%d", a++);
	//}
	return 0;
}


