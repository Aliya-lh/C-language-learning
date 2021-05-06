////对10个数组元素依次赋值为0，1，2，3，4，5，6，7，8，9，要求按逆序输出
//#include<stdio.h>
//int main() {
//	int i, a[10];
//	for(i = 0;i <=9;i++)//利用循环对数组元素a[0]~a[9]赋值
//		a[i] = i;
//		for(i = 9;i >= 0;i--)//同样利用循环来输出a[9]~a[0]共10个数组元素
//			printf("%d", a[i]);
//		
//		printf("\n");
//		return 0;
//}


////用数组来处理Fibonacci数列问题
////程序分析：根据斐波那契数列特点（前两个数相加可得到第三个数），所以可以在循环中
////使用  arr[i]=arr[i-2]+arr[i-1]  可以计算出arr[0]`arr[19]的值。
//#include<stdio.h>
//int main() {
//	int i;
//	int arr[20] = { 1,1 };//对最前面arr[0] arr[1]两个元素赋初值1
//	for (i = 2;i < 20;i++) 
//		arr[i] = arr[i - 2] + arr[i - 1];//先后求出arr[2]~arr[19]的值
//	for (i = 0;i < 20;i++) {
//		if (i % 5 == 0)//控制每输出5个数后换行
//			printf("\n");
//		printf("%12d", arr[i]);//输出一个数
//	}
//		printf("\n");
//	
//	return 0;
//}


//查找变量在数组中的位置
int num = 0;
printf("请输入要查找的数字：");






//二分查找
//待查找区间就是[left,right]