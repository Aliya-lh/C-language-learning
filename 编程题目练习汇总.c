//编程题目练习汇总
//1. 写一个函数求两个整数的较大值
//如：输入：10 20 输出较大值：20
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Max(int x,int y){//定义max函数，函数值为整型int，形参x，y也为整型
	int z;
	if (x > y) {
		z = x;
	}
	else {//不太建议这样写
		z = y;
	}
	return z;
}
int main() {
	int Max(int x, int y);//对被调用函数max的声明
	//（main函数位于下面时可以省略这一步）
	int a, b, c;//定义变量a，b，c
	scanf("%d%d", &a, &b);//输入变量a,b的值
	c = Max(a, b);//函数调用，调用max的值，将得到的值赋给c
	printf("max=%d\n", c);
	system("pause");
	return 0;
}


//或者这种写法（建议用）
#include <stdio.h>
#include <stdlib.h>

int maxNum(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}
//或者使用三目运算符
int maxNum(int x, int y) {
	return x > y ? x : y;
}

int main() {
	int Max(int x, int y);//对被调用函数max的声明
	//（main函数位于下面时可以省略这一步）
	int a, b, c;//定义变量a，b，c
	scanf("%d%d", &a, &b);//输入变量a,b的值
	c = Max(a, b);//函数调用，调用max的值，将得到的值赋给c
	printf("max=%d\n", c);
	system("pause");
	return 0;
}




//2.写代码将三个整数按从大到小输出。
//例如：输入：2 3 1 输出：3 2 1
#include <stdio.h>
#include<stdlib.h>

void swap(int* x, int* y) {//创建一个用来交换的函数swap
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void func() {//创建函数用来比较三个数大小
	int a = 10;
	int b = 30;
	int c = 20;
	// 1. 先拿a和b比较一下
	// 如果a<b,就交换两个数字
	//目的是让a的值始终大于b
	if (a < b) {
		swap(&a, &b);
	}
	//2.再拿a和c比较
	//如果a<c，就交换两个数字
	//目的是让a的值始终比c大
	if (a < c) {
		swap(&a, &c);
	}
	//a中存的就是3个数的最大值
	printf("%d\n", a);
	//3.再比较一下b和c，谁大就先输出谁
	if (b > c) {
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else {
		printf("%d\n", c);
		printf("%d\n", b);
	}
	printf("\n");
}

int main() {
	func();
	system("pause");

}





//3.打印3的倍数的数 (写一个代码打印1 - 100之间所有3的倍数的数字)
#include<stdio.h>
#include<stdlib.h>

void print3() {
	for (int i = 1;i <= 100;i++) {// 前闭后开写法只是建议，采取合适、舒服的写法
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
}
int main() {
	print3();
	system("pause");

}




// 4. 给定两个数，求这两个数的最大公约数
//例如：输入：20 40 输出：20
//找出最大公约数
//约数 因数 因子
//6除以2等于3 6除以1等于6 8除以2等于4 8除以1等于8 
// 所以2为6和8的最大公约数
//2×3=6 2和3为6的因数
//6除以2等于3 则2就为6的因数

//程序分析：采用暴力求解！！
//如果给定x和y，最大公约数一定出现在[1，min(x，y)]之间
//6和8的最大公约数一定出现在1-6之间~
#include<stdio.h>
#include<stdlib.h>

int maxGongYueShu(int x, int y) {
	int min = x < y ? x : y;//采用三目运算符判断
	int result = 1;
	for (int i = 1;i <= min;i++) {//判断最大公约数一定出现在[1，min(x，y)]之间
		if (x % i == 0 && y % i == 0) {
			//i就是x y的公约数
			result = i;//由于i++，所以每运算一次，得到的新的i肯定比旧的大
		 //不需要记住所有的公约数，只要能找到最大的即可（只需要返回最后的一个即为最大的）
		}
	}
	return result;//当我们函数返回，得到的result就是最大公约数
}
int main() {
	printf("%d\n", maxGongYueShu(100, 120));
	system("pause");
	return 0;
}




//5. 打印闰年(打印1000年到2000年之间的闰年)
#include <stdio.h>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是否为闰年
		if (year % 4 == 0)  // 如果year能够被4整除，year可能为闰年
		{
			if (year % 100 != 0) // 如果year不能内100整除，则一定是闰年
			{
				printf("%d ", year);
			}
		}
		if (year % 400 == 0)  // 每400年再润一次
		{
			printf("%d ", year);
		}
	}


	return 0;
}




//6. 打印素数(写一个代码：打印100~200之间的素数)
int main()
{
	int i = 0;
	int count = 0;


	// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
	for (i = 101; i <= 200; i++)
	{
		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}

		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}


//上述方法的缺陷：超过i一半的数据，肯定不是i的倍数，上述进行了许多没有意义的运算，因此可以采用如下
// 方式进行优化
// 方法二：每拿到一个数据，只需要检测其：[2, i/2]区间内是否有元素可以被2i整除即可，可以说明i不是素数
int main()
{
	int i = 0;//
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//...
		if (j > i / 2)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}




/*
方法二还是包含了一些重复的数据，再优化：
如果i能够被[2, sqrt(i)]之间的任意数据整除，则i不是素数
原因：如果 m 能被 2 ~ m-1 之间任一整数整除，其二个因子必定有一个小于或等于sqrt(m)，另一个大于或等于 sqrt(m)。
*/
int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//...
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}


//方法4
/*
继续对方法三优化，只要i不被[2, sqrt(i)]之间的任何数据整除，则i是素数，但是实际在操作时i不用从101逐渐递增到200，因为出了2和3之外，不会有两个连续相邻的数据同时为素数
*/


int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//...
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\ncount = %d\n", count);
	return 0;
}




//7. 编写一个程序数一下1-100的所有整数中9的个数
//思路：以9结尾的数：9 19 29 39 49 59 69 79 89
//9作为十位的数：91 92 93 94 95 96 97 98
//特殊的99里面有两个9
// 共20个
//程序分析：取出这个数字的个位和十位，分别判断一下看是不是9即可~
//取出个位：num % 10  取出十位：num/10  取出百位：num/100
#include<stdio.h>
#include<stdlib.h>

int nineCount() {
	int count = 0;
	for (int i = 1;i <= 100;i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	return count;
}

int main() {
	printf("%d\n", nineCount());
	system("pause");
	return 0;
}




//8. 分数求和（计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果）
#include<stdio.h>
#include<stdlib.h>

double fenshuqiuhe() {
	double sum = 0.0f;
	for (int i = 1;i <= 100;i++) {
		if (i % 2 == 1) {//奇数项
			sum += 1.0 / i;
		}
		else {
			//偶数项
			sum -= 1.0 / i;
		}
	}
	return sum;
}


int main() {
	printf("%f\n", fenshuqiuhe());
	system("pause");
	return 0;
}





//9. 求最大值（求10 个整数中最大值）
//程序分析：使用“打擂台”方法
#include<stdio.h>
#include<stdlib.h>

int getMax(int arr[], int size) {
	int maxNum = arr[0];
	for (int i = 1;i < size;i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}
	return maxNum;
}

int main() {
	int arr[] = { 9,5,2,7,3,6,8,12,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int result=getMax(arr, size);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}





//10. 乘法口诀表（在屏幕上输出9*9乘法口诀表）
// 以行号为变量，研究每一行打印的内容和行号之间的规律是什么~
// 找规律~~一行一行打印
// 1.一共打印9行
// 2.第i行打印i列
// 3.针对第row行，第col列，打印的内容就是col*row
// 列×行
#include<stdio.h>
#include<stdlib.h>

int printMultiply() {
	for (int row = 1;row <= 9;row++) {
		//第row行要打印row个列
		for (int col = 1;col <= row;col++) {
			printf("%d*%d=%d ", col, row, col * row);
		}
		printf("\n");
	}
}

int main() {
	printMultiply();
	system("pause");
	return 0;
}


//输出12*12乘法口诀表
#include<stdio.h>
#include<stdlib.h>

void printMultiply(int maxRow) {
	for (int row = 1;row <= maxRow;row++) {
		for (int col = 1;col <= row;col++) {
			printf("%d*%d=%d ", col, row, col * row);
		}
		printf("\n");
	}
	
}

int main() {
	printMultiply(12);
	system("pause");
}




//11. 猜数字游戏
//猜数字游戏
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void表示函数没有返回值
//使用这个函数表示一局游戏
void game() {
	printf("开始一局猜数字游戏\n");
	//1.先生成一个[1，100]的随机整数
	int toGuess = rand() % 100 + 1;
	//2.提示用户进行交互
	while (1) {
		printf("请输入一个整数[1,100]:");
		int inputNum = 0;
		scanf("%d", &inputNum);
		if (inputNum < toGuess) {
			printf("低了！\n");
		}
		else if (inputNum > toGuess) {
			printf("高了！\n");
		}
		else {
			printf("猜对了！\n");
			break;
		}
	}
}
int menu() {
	printf("=================\n");
	printf("欢迎来到猜数字游戏！");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("=================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main() {
	srand((unsigned int)time(0));
	//只要让每次运行程序的时候，设置的随机种子不一样
	//时间
	//使用time(0)获取到当前的时间戳                                                                                                         
	//game();
	//加上一个和用户交互的菜单
	while (1) {
		int choice = menu();
		if (choice == 1) {
			game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
		else {
			printf("您的输入有误！\n");
		}
	}
	system("pause");
	return 0;
}




//12. 二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include <stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中的元素

	int left = 0;//数组最左边数的下标
	int right = sz - 1;//数组最右边数的下标

	while (left <= right)//防止交叉
	{
		int mid = (left + right) / 2;//mid是中间数的下标
		if (arr[mid] > k) {
			right = mid - 1;//中间数在k右边，查找范围变为最左边的数和中间数前一个数之间
		}
		else if (arr[mid] < k) {
			left = mid + 1;//中间数在k的左边，查找范围变为中间数后一个数与最右边的数之间
		}
		else {
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)//左大于右，即交叉
	{
		printf("找不到！\n");
	}
	return 0;

}


//或者这样写
//写一个函数，实现一个整型有序数组的二分查找
//其中arr表示待查找的数组
//toFind表示要去查找数字
//形参这里的int arr[]已经不是一个数组了，隐式转换成了一个指针
//int*

 #include<stdio.h>
int binarySearch(int* arr, int size,int toFind) {
	int left = 0;
	int right = size-1;
	//[left,right]构成了一个闭区间
	//只要这个区间不为空，就需要进行查找
	while (left <= right) {
		int mid = (left + right) / 2;
		if (toFind < arr[mid]) {
			//去左侧查找
			right = mid - 1;
		}else if (toFind>arr[mid]) {
			//去右侧查找
			left = mid + 1;
		}else {
			//找到了 此处咱们使用函数返回值表示找到的元素的下标位置
			//最好不要直接printf
			//我们也不知道调用者到底是想拿到结果之后咋做
			//调用这可能是需要打印，也可能是需要记录文件，也可能是参与其他运算
			//这些都不是binarySesrch这个函数本身应该考虑的事情
			//一个函数只做一件事情！！
			return mid;
		}
	}
	//如果上面的循环最后也没找到合适的元素，认为没找到
	//返回一个无效的下标，通常就是返回-1
	return -1;
	
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int size= sizeof(arr) / sizeof(arr[0]);
	//C语言中求数组长度和数组个数的典型用法
	int ret=binarySearch(arr,size,6);
	printf("ret=%d\n", ret);
}





//13. 扫雷游戏
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	/*for (int row = 0;row < MAX_ROW;row++) {
		for (int col = 0;col < MAX_COL;col++) {
			showMap[row][col] = '*';

		}
	}*/
	//mem=>memory 内存
	//set ：设置，集合
	//memset的功能就是把一段内存上的每个字节都设置成一个具体的值
	//数组隐式转成了指针，所以不可以用sizeof来求数组长度
	//二维数组的每个元素都是在一个连续的内存空间上布局的
	memset(showMap, '*', MAX_ROW * MAX_COL);
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	//随机产生10个位置作为地雷
	//先设置随机种子
	srand((unsigned int)time(0));
	int mineCount = 0;
	while (mineCount < MINE_COUNT) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		mineCount++;
	}
}

//希望这一个函数能同时具备打印两种地图的功能
//取决于实参填啥
//形参名字叫做"map"不太合适.C++标准库里有一个std：map
void print(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0;row < MAX_ROW;row++) {
		for (int col = 0;col < MAX_COL;col++) {
			printf("%c", theMap[row][col]);
		}
		printf("\n");
	}

}

void update(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL], int row, int col) {
	//表示周围地雷的个数
	int count = 0;
	for (int r = row - 1;r <= row + 1;r++) {
		for (int c = col - 1;c <= col + 1;c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				//此时r，c坐标超出棋盘的范围，直接跳过
				continue;
			}
			if (r == row && c == col) {
				//不需要判断，直接下次循环
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	//如果直接赋值的话，此时假设count是2
	//当前row，col位置的元素就被设置成了ASCII值为2的字符
	//而不是'2'
	// 类似于这样的转换, 只是 C 语言中是这么写的. 
	// 其他的主流编程语言中, 一般是不允许 字符类型 和 整数类型 进行混合运算的
	showMap[row][col] = '0' + count;
}


int main() {
	//创建地图并进行初始化
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedCount = 0;
	while (1) {
		//2.打印地图
		print(showMap);
		//3.玩家输入坐标
		//此处是为了验证update函数的正确性
		//先把地雷的布局也打印出来
		int row = 0;
		int col = 0;
		printf("请输入坐标(row,col):");
		scanf("%d %d", &row, &col);
		//进行合法性判定
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您输入的坐标有误！请重新输入！\n");
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("您输入的位置已经翻开了！\n");
			continue;
		}
		//4.判断是否踩雷
		if (mineMap[row][col] == '1') {
			printf("您踩雷了！游戏结束！\n");
			break;
		}
		//5.更新showMap，显示当前位置周围有多少个雷
		update(showMap, mineMap, row, col);
		//6.进行游戏胜利的判定，统计当前一共翻开了多少个格子
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("恭喜你游戏胜利！\n");
			break;
		}

	}
	//print(mineMap);
	system("pause");
	return 0;
}




//14. 函数判断素数
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//判断一个数是不是素数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



#include<stdlib.h>
int prime(int n) {
	int i;
	if (n < 2) {
		printf("%d不是素数", n);
	}
	else {
		for (i = 2;i < n;i++) {//判断n在2~n-1中有没有因数
			if (n % i == 0)//如果用可以除尽的数，则非素数
				break;
		}
	}if (i < n) {//在2~n-1之间有素数
		printf("%d不是素数\n", n);
	}
	else
		printf("%d是素数\n", n);

	return 0;
}


int main() {
	int n;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	prime(n);
	system("pause");
	return 0;
}

//或者这样写
//写一个函数判断一个数是不是素数
//返回值设定为int  是素数就返回1，不是素数就返回0
//is it a prime num?
//
#define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
int isPrime(int num){
	if (num==0||num == 1) {
		return 0;
	}
	for (int tmp = 2;tmp < num;tmp++) {
		if (num % tmp== 0) {
			//这种情况就是找到反例了！！！
			return 0;
		}
	}
	//循环结束也没找到反例，当前就认为是素数
	return 1;
}
int main(){
	int i=101;
	printf("100到200之间的素数有：");
	for (int i = 101;i <= 200;i++) {
		if (isPrime(i)) {
			printf("%d ", i);

		}
	}
	return 0;
}





//15. 函数判断闰年
//实现函数判断year是不是闰年。
 #include<stdio.h>
int isLeapYear(int year) {
	if (year % 100 == 0) {//世纪闰年
		if (year % 400 == 0) {
			return 1;
		}
		return 0;
	}else {
		if (year % 4 == 0) {
			return 1;
		}
		return 0;
		}
		//普通闰年
	}


int main() {
	printf("%d\n", isLeapYear(1984));
}





//16. 交换两个整数 
//实现一个函数来交换两个整数的内容。





//17. 乘法口诀表
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
#include<stdio.h>
#include<stdlib.h>

void printMultiply(int maxRow) {
	for (int row = 1;row <= maxRow;row++) {
		for (int col = 1;col <= row;col++) {
			printf("%d*%d=%d ", col, row, col * row);
		}
		printf("\n");
	}

}

int main() {
	printMultiply(12);
	system("pause");
}




//18. 打印一个数的每一位
//递归方式实现打印一个整数的每一位
//递归
//接受一个整型值（无符号），按照顺序打印它的每一位
//输入:1234 输出：1 2 3 4
#include<stdio.h>
void printNum(unsigned int num) {
	if (num > 9) {
		printNum(num / 10);
	}
	printf("%d", num % 10);
}
int main() {
	printNum(1234);

}





//19. 求阶乘 n!
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归方法
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Sum(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return Sum(n - 1) * n;
	}
}
int main()
{
	printf("%d\n", Sum(5));
	system("pause");
	return 0;
}

//非递归方法
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int m = 1;
	int n = 1;
	int i = 1;
	printf("请输出一个整数！\n");
	scanf_s("%d", &n);
	for (i = 1;i <= n;++i) {
		m = m * i;
	}
	printf("%d\n", m);
	system("pause");
	return 0;
}




20. strlen的模拟（递归实现）
递归和非递归分别实现strlen




//21. 字符串逆序（递归实现）
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//将字符串逆序，不是逆序打印！！
//非递归方法
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char str[]) {
	int left = 0;//先创建一个left=0（最开始元素的下标）
	int right = strlen(str) - 1;//最后一个元素的下标
	while (left < right) {//满足条件就交换left和right位置的元素
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main() {
	char str[] = "abcd";
	reverseString(str);
	printf("%s\n", str);
	system("pause");

}


//用递归方法（但该题不适合用递归，比较复杂）
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString2(char str[]) {
	//先去交换左右两侧边缘的字符，然后递归处理中间的字符串
	//为了知道右侧的边缘的字符是啥，就需要先知道字符串的长度
	int len = strlen(str);
	if (len == 0 || len == 1) {
		return;
	}
	//交换边缘的元素
	char tmp = str[0];
	str[0] = str[len - 1];

	str[len - 1] = '\0';//注意！！用单撇号！！
	//这个操作是一个临时性的操作，目的是为了让中间的“bcde”能作为一个独立的字符串

	//递归的来处理中间部分的字符串了
	//为了得到中间部分的字符串，需要做两件事
	//str+1，得到中间字符串的起始位置
	//还需要把刚才的len-1  f  的位置设置为\0

	//进行递归操作
	reverseString2(str + 1);
	//刚才是临时将len-1 的位置设为\0了
	//当递归结束后，还需要将len -1 的位置还原成合理的值
	str[len - 1] = tmp;
}


int main() {
	char str[] = "abcdef";
	reverseString2(str);
	printf("%s\n", str);
	system("pause");
}





//22. 计算一个数的每位之和（递归实现）
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//递归方法
#include<stdio.h>
#include<stdlib.h>

int digitSum(unsigned int num) {
	//1.明确这个函数是用来做什么的：分别取出这个数的每一位，进行累加
	//2.找出函数结束条件：当num==0时，函数返回
	//3.找出等价关系式：个位+递归处理剩余的位
	//num%10+digitSum（num/10)  例如：1792=> 1 + 179
	if (num == 0) {
		return 0;
	}
	return num % 10 + digitSum(num / 10);
}


int main() {
	printf("%d\n", digitSum(1792));
	system("pause");
	return 0;
}



//非递归方法
#include<stdio.h>
#include<stdlib.h>

int digitSum(unsigned int num) {
	//只要取出每一位，进行累加即可
	int sum = 0;
	while (num != 0) {
		//取出个位
		printf("%d\n", num % 10);
		sum += num % 10;//与sum=sum+num%10;等价
		num /= 10;//与num=num/10;等价
	}
	return sum;



}

int main() {
	int ret = digitSum(1792);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}



//23. 递归实现n的k次方
//编写一个函数实现n的k次方，使用递归实现。
//递归方法
#include<stdio.h>
#include<stdlib.h>

int myPower(int n, int k) {
	if (k == 0) {
		return 1;
	}
	return n * myPower(n, k - 1);

}

int main() {
	printf("%d\n", myPower(2, 10));
	system("pause");
	return 0;
}




//24. 计算斐波那契数
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//递归方法：
#include<stdio.h>
int fib(int n) {
	if (n == 1 || n== 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	printf("%d\n", fib(2));
	return 0;

}

//非递归 通过循环的方式：
#include <stdio.h>
int fib2(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	//使用变量i表示当前项
	int last2 = 1;//i-2项
	int last1 = 1;//i-1项
	int cur = 0;//当前第i项的结果
	for (int i = 3;i <= n;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main() {
	printf("%d\n", fib2(5));
	return 0;
}


/





//25. 三子棋游戏代码
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//char chessBoard[3][3];
//这里的3称为magic number 魔幻数字/魔鬼数字
//解决办法：用常量来代替数字

void init(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0;row < MAX_ROW;row++) {
		for (int col = 0;col < MAX_COL;col++) {
			chess[row][col] = ' ';

		}
	}
}
void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0;row < MAX_ROW;row++) {
		printf("|");
		for (int col = 0;col < MAX_COL;col++) {
			printf(" %c |", chess[row][col]);
		}
		printf("\n+---+---+---+\n");
	}
}

void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("玩家落子......\n");
	while (1) {
		printf("请输入坐标(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		// 进行合法性校验, 判定用户输入的内容是否是合法的
		// 如果不合法, 就让用户重新输入
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			// 就是不合法, 于是要让用户重新输入
			printf("您输入的坐标非法! 请重新输入!\n");
			continue;
		}
		// 假设用户输入了1, 1, 但是 1 1 位置已经有子了~~ 
		if (chessBoard[row][col] != ' ') {
			// 该位置已经有子了
			printf("您输入的位置已经有子了, 请重新输入!\n");
			continue;
		}
		// 进行落子~~
		chessBoard[row][col] = 'x';
		break;
	}
}

void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			//这个位置已经有子了
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}

// 返回 1 表示满了, 返回 0 表示没满
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	// 遍历棋盘, 看看有没有空格. 有空格就是没满~~
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
//此处约定
//如果返回x，表示玩家获胜，
//如果返回o，表示电脑获胜
//如果返回' ',表示胜负未分，还要继续下棋
//如果返回去q，表示和棋
char isGameOver(char chessBoard[MAX_ROW][MAX_COL]) {
	//扫描所有的行，所有的列，以及两个对角线
	for (int row = 0;row < MAX_ROW;row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	// 判定是否和棋
	if (isFull(chessBoard)) {
		return 'q';
	}
	// 胜负未分
	return ' ';
}
int main() {
	//不建议使用全局变量
	//搜索树
	char chessBoard[MAX_ROW][MAX_COL];
	//1.对棋盘进行初始化
	init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.打印棋盘
		print(chessBoard);
		//3.玩家落子
		playerMove(chessBoard);
		//4.判定胜负
		// TODO
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// 游戏结束
			break;
		}
		//5.电脑落子
		computerMove(chessBoard);
		// 6. 判定胜负
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// 游戏结束
			break;
		}
	}

	if (winner == 'x') {
		printf("恭喜你赢了!\n");
	}
	else if (winner == 'o') {
		printf("你咋连人工智障都下不过!\n");
	}
	else {
		printf("你和人工智障五五开!\n");
	}

	system("pause");
	return 0;
}




//26. 交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//程序分析：实现数组的交换：
//首先，创建数组，在main函数中将数组的值传递给外部Fun函数
//其次，外部Fun函数通过一个循环对数组里面的值进行交换
//最后，在main函数中调用Fun函数，打印数组A，B
#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void Fun(char arr1[], char arr2[]) {
	int i = 0;
	for (i = 0;i < SIZE;i++) {
		//简单交换
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main() {
	char arr1[] = { "abcd" };
	char arr2[] = { "dcba" };
	Fun(arr1, arr2);
	//输出字符串用%s
	printf("arr1=%s arr2=%s", arr1, arr2);
	printf("\n");
	system("pause");
	return 0;
}



//27. 数组操作
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//27. 数组操作
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void init(int arr[], int size) {
	for (int i = 0;i < size;i++) {
		arr[i] = 0;
	}
}

void print(int arr[], int size) {
	for (int i = 0;i < size;i++) {
		printf("%d\n", arr[i]);
	}
}

void reverse(int arr[], int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main() {
	int arr[SIZE];
	init(arr, SIZE);
	for (int i = 0;i < SIZE;i++) {
		arr[i] = i;
	}
	reverse(arr, SIZE);
	print(arr, SIZE);

	//或者这样写init(arr, sizeof(arr) / sizeof(arr[0]));
	system("pause");
	return 0;
}


//28. 冒泡排序
//实现一个对整形数组的冒泡排序
//冒泡排序
#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int size) {
	//写一下从后往前遍历的版本
	//每次从后往前遍历比较相邻元素，每一趟能把最小的值放到最前面
	//bound=>边界，使用这个变量的值表示已排序区间和待排序区间的分界线
	//[0,bound)已排序区间
	//[bound,size)待排序区间
	int bound = 0;
	for (;bound < size;bound++) {
		//通过这个循环来控制后续比较相邻元素的比较趟数
		//接下来去实现一趟比较交换的过程
		for (int cur = size - 1;cur > bound;cur--) {
			//相邻元素，就是以cur为基准
			//cur-1，cur+1,由于cur是从size-1开始的
			//就不能使用cur+1作为相邻元素了，必须用cur-1
			//牢记数组下标一定不能越界！！
			if (arr[cur - 1] > arr[cur]) {
				//不符合升序条件，就进行交换
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;

			}
		}
	}
}
int main() {
	int arr[] = { 9,5,2,7,3,6,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0;i < size;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
}




//29. 求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299 输出例子 : 7

//程序分析：求不同位，要用到按位异或^（相同为0，不同为1），将m和n按位异或（m^n）
// 此时m和n相同的二进制位清零，不同的二进制比特位为1
// 统计异或完成后结果（tmp）的二级制比特位中有多少个1即可（采用按位与）
//方法1
#include<stdio.h>
#include<stdlib.h>

int bitDiffCount(int a, int b) {
	//1.先把a^b
	int tmp = a ^ b;
	//2.统计结果中，1的个数即可
	int count = 0;
	for (int i = 0;i < 32;i++) {
		if (tmp & (1 << i)) {
			count++;
		}
	}
	return count;
}

int main() {
	printf("%d\n", bitDiffCount(1999, 2299));
	system("pause");
	return 0;
}

//方法2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int diffBit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp) {//与tmp!=0;等价
		tmp = tmp & (tmp - 1);//统计异或后有多少个1
		count++;
	}
	return count;
}
int main() {
	int m, n;
	while (scanf("%d %d", &m, &n) == 2) {
		printf("%d\n", diffBit(m, n));
	}
	return 0;
}

//注意！！
//tmp=tmp&(tmp-1); 与 tmp & (1 << i) 等价



//30. 打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//程序分析：二进制序列在计算机中的存储位有32位
//利用移位和与操作符来实现
//把要打印的那一位和1相与，结果就是它本身
//通过移位操作让要打印的位数和1相与就能把这一位成功打印到屏幕上了
#include<stdio.h>
#include<stdlib.h>
void getBits(int num) {
	//注意，当前约定最右边这一位为第0位
	for (int i = 1;i < 32;i += 2) {
		if (num & (1 << i)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
	//再取所有的偶数位
	for (int i = 0;i < 32;i += 2) {
		if (num & (1 << i)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
}

int main() {
	getBits(99);
	system("pause");
	return 0;
}


//#include<stdio.h>
//int main() {
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 31;i >= 1;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30;i >= 0;i = i - 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	return 0;
//
//}





//31. 统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
#include<stdio.h>
int countOneBits(unsigned int num) {
	int count = 0;
	while (num != 0) {
		num = num & (num - 1);//去掉二进制位最低位的1
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





//32. 交换两个变量（不创建临时变量）
//不允许创建临时变量，交换两个整数的内容
//交换两个变量（不创建临时变量）不允许创建临时变量，交换两个整数的内容
#include<stdio.h>
int main() {
	int a = 520;
	int b = 1314;
	printf("before:\n");
	printf("a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:\n");
	printf("a=%d,b=%d\n", a, b);
	return 0;
}




//33. 使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//程序分析：由于数组元素都是整数，所以需要定义一个int型的指针，依次遍历数组中的所有元素
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);//求出数组长度
	int* p = arr;//定义指针变量并初始化，数组名代表的是数组首元素的地址
	for (int i = 0;i < size;i++) {
		printf("%d ", *p);//取到p所指向位置的元素
		p += 1;//获取到p的下一个位置
	}
	system("pause");
	return 0;
}

//也可以写成以下这种形式
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int* p = arr;p < arr + size;p += 1) {
		printf("%d ", *p);
	}
	system("pause");
	return 0;
}





//34. 字符串逆序
//写一个函数，可以逆序一个字符串的内容。





//35. 写一个函数，每调用一次这个函数，就会将num的值增加1
//函数声明
 #include<stdio.h>
void func(int* num) { //函数定义
	(*num)++;
}

int main() {
	int num = 0;
	func(&num);
	printf("%d\n", num);
}





//创建数组
//#define SIZE 4 //可以使用宏
//也可以枚举
enum {
	SIZE = 4,
};

#include<stdio.h>
int main() {
	const int n = 4;
	int n = 4;
	int arr[SIZE] = { 0 };
	//也可以使用count
	//int arr[n] = { 0 };
}
#include<stdio.h>
int main() {
	int arr[10] = { 0 };
	//通过循环的方式，给这个数组都设置一个值，从1-10
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 1;
	}
	for (int i = 0;i < 10;i++) {
		printf("%d\n", arr[i]);
	}
}



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
	for (i = 1;i < n;i++) {//从第二行开始填
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



//水仙花数
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int i = 0;
	for (int i = 0;i <= 999999;i++) {
		int count = 1;
		int tmp = i;
		int sum = 0;
		//判断i是否为水仙花数
		//1.求判断数字的位数
		while (tmp / 10) {
			count++;
			tmp = tmp / 10;
		}
		//2.计算每一位的次方和
		tmp = i;
		while (tmp) {
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		//3.判断
		if (sum == i)
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//根据数学知识可得：money*2-1 （等差数列）
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int money = 0;
	int count = 0;
	scanf("%d", &money);
	if (money <= 0) {
		count = 0;
	}
	else {
		count = money * 2 - 1;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}


////冒泡排序    有问题！！！
////实现一个对整型数组的冒泡排序（从大到小）
//#include<stdio.h>
//#include<stdlib.h>
//
//void bubbleSort(int arr[], int size) {
//	//从前往后遍历版本
//	//每一趟能把最大的值放到最前面
//	int bound = 0;
//	for (bound = 0;bound < size;bound++) {
//		for (int cur = size - 1;cur > bound;cur--) {
//			if (arr[bound+1] > arr[bound]) {
//				//不符合降序条件，进行交换
//				int tmp = arr[bound+1];
//				arr[bound+1] = arr[bound];
//				arr[bound] = tmp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,5,2,7,3,6,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, size);
//	for (int i =0;i < size;i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



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




//设计一个小程序，来判断当前机器的字节序
#include<stdio.h>
#include<stdlib.h>
//如果是大端字节序，就返回1，否则返回0
int isBigEnd() {
	int num = 0x11223344;
	int* p = &num;
	//这个指针之间的强制类型转换，不影响指针内部存储的地址值
	//只影响后续解引用代码对这个地址的内存的长度的理解
	char* p2 = (char*)p;
	if (*p2 == 0x11) {
		return 1;
	}
	return 0;
}

int main() {
	printf("%d\n", isBigEnd());
	system("pause");
	return 0;
}




//计算求和
// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
// 例如：2+22+222+2222+22222
#include<stdio.h>
#include<stdlib.h>
void func() {
	int sum = 0;
	//接下来需要能够控制这个循环
	// cur表示当前的某一项
	int cur = 0;
	for (int i = 1;i <= 5;i++) {
		cur = cur * 10 + 2;
		sum += cur;
	}
	printf("sum=%d\n", sum);
}

int main() {
	func();
	system("pause");
	return 0;
}


//打印0~100000之间所有的水仙花数并输出
//1.先判定这个数字是几位数
//2.取出这个整数中的每一位，并且进行求n次方操作
//3.求和并且进行判定
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calcDecimalCount(int num) {//判定是几位数
	int count = 0;
	while (num != 0) {
		num /= 10;
		count++;
	}
	return count;
}


int isShuiXian(int num) {
	int oldNum = num;//记录一下最初的num的值
	int n = calcDecimalCount(num);
	//取出每一位并求和
	int sum = 0;
	while (num != 0) {
		int tmp = num % 10;
		num /= 10;
		sum += (int)pow(tmp, n);
	}
	//判定一下是否是水仙花数
	if (sum == oldNum) {
		return 1;
	}
	return 0;
}

int main() {
	for (int i = 1;i <= 100000;i++) {
		if (isShuiXian(i)) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}



//打印菱形
//程序分析：这类题都是找规律！一行一行打印 行号和每一行打印的东西
//把菱形分为三个部分 上三角 + 横线 + 下三角 
//需要找到行号 空格/星号之间的关系即可
//第一行 6个空格 1个*
//第二行 5个空格 3个*
//第三行 4个空格 5个*
//第四行 3个空格 7个*
//第i行 （7-i）个空格  （2*i-1） 个*
//上三角一共打印6行，循环6次
#include<stdio.h>

void printLine(int starCount, int spaceCount) {
	for (int i = 0;i < spaceCount;i++) {//先打印空格
		printf(" ");
	}
	for (int i = 0;i < starCount;i++) {//再打印星号
		printf("*");
	}
	printf("\n");
}

void printLingXing() {
	//1.先打印上三角
	for (int row = 1;row <= 6;row++) {
		printLine(2 * row - 1, 7 - row);
	}
	//2.打印中间的线
	printLine(13, 0);
	//3.最后打印下三角，就把上三角的打印过程给反过来
	for (int row = 6;row >= 1;row--) {
		printLine(2 * row - 1, 7 - row);
	}

}

int main() {
	printLingXing();
	return 0;
}

未完成！！
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

int menu() {
	printf("============================\n");
	printf("欢迎使用通讯录程序\n");
	printf("1.查看所有联系人\n");
	printf("2.新增联系人\n");
	printf("3.根据名字查找联系人\n");
	printf("4.删除联系人\n");
	printf("5.修改联系人信息\n");
	printf("============================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


void showPersonInfo(AddressBook* addressBook) {
	assert(addressBook != NULL);
	//只需要把每个联系人信息打印出来即可
	printf("查看所有联系人...\n");
	for (int i = 0;i < addressBook->size;i++) {
		printf("[%d] %s\t%s\n", addressBook->persons[i].name);

	}
}

void addPersonInfo(AddressBook* addressBook) {

}

void findPersonInfo(AddressBook* addressBook) {

}

void deletePersonInfo(AddressBook* addressBook) {

}

void updataPersonInfo(AddressBook* addressBook) {

}

//根据刚才的这些操作函数，提取出其中的函数指针类型
typedef void(*Func)(AddressBook*);

int main() {
	//先在main函数中创建出这个结构体变量来
	AddressBook addressBook;
	//针对这个结构体变量进行初始化
	init(&addressBook);
	//创建一个函数指针数组
	Func arr[] = {
		NULL,
		showPersonInfo,
		addPersonInfo,
		findPersonInfo,
		deletePersonInfo,
		updataPersonInfo
	};
	while (1) {
		int choice = menu();
		if (choice < 1 || choice >= sizeof(arr) / sizeof(arr[0])) {
			printf("非法的choice！\n");
			continue;
		}
		arr[choice - 1](&addressBook);


		/*if (choice == 1) {
			showPersonInfo(&addressBook);
		}
		else if (choice == 2) {
			addPersonInfo(&addressBook);
		}
		else if (choice == 3) {

		}*/
		//这样写比较复杂，可以用函数指针进行优化
	}
	return 0;
}































