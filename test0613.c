#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	//形如"hello"这样的a字符串常量，只在内存中存一份即可，不需要存储多份
//	//只在内存中存一份即可，不需要存储多份
//	//应该使用strcmp来比较字符串的内容
//	char* p1 = "hello";
//	char* p2 = "hello";
//	char p3[] = "hello";
//	char p4[] = "hello";
//
//	p3[0] = 'a';
//	printf("%s\n", p4);//仍然是hello，结果不变 p3 p4是不同的内存空间
//
//	p1[0] = 'a';
//	printf("%s\n", p2);//程序崩溃 hello是字符串常量不能修改
//	/*if (p1 == p2) {
//		printf("相等\n");
//	}
//	else {
//		printf("不相等\n");
//	}
//	if (p3 == p4) {
//		printf("相等\n");
//	}
//	else {
//		printf("不相等\n");
//	}*/
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int arr[] = { 1,2,3,4 };
//	//arr和&arr得到的是两种不同类型的指针
//	//arr能够得到int*   &arr得到的是int(*)[4] 
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);
//	system("pause");
//	return 0;
//}


 

//一维数组传参几种方式
//void test(int arr[]) {
//	printf("hello");
//}

//void test(int arr[10]) {
//	printf("hello");
//}

//数组长度的信息已经在传参的时候丢失了 
//void test(int arr[20]) {//这种写法也可以  传的不是数组，传的是指针！！ 
//	printf("hello");
// }

//void test(int* arr) {//以上写法相当于这个
//	printf("hello");
//}

//void test2(int* arr[20]) {
//	printf("hello");
//}


////二级指针传参可以使用int**
//void test2(int** arr) {
//	printf("hello");
//}

////也可以使用typedef
//typedef int* IntPtr;
//void test2(IntPtr* arr) {
//	printf("hello");
//}

////二维数组传参
//void test(int arr[3][4]) {//错误  等价转换成了
//	//void test(int (*arr)[4])      arr类型是int(*)[4],而实参隐式转成的指针是int(*)[5]  类型不同
//
//}

//void test(int** arr) {
//	//错误
//}

////三维数组传参
////这是推荐写法，一定是对的 
//void test(int arr[3][4][5]) {
//
//}

////这种写法也是可以的
//void test(int arr[10][4][5]) {
//
//}

////这种写法也可以
//void test(int arr[][4][5]) {
//
//}


////这种写法不可以！！
////形参类型int(*)[10][5]  实参类型int(*)[4][5]
//void test(int arr[][10][5]) {
//
//}

//void test(int arr[][][5]) {//不可以！！
//
//}

//int main() {
//	//二维数组传参
//	int arr[3][5] = { 0 };
//	//三维数组传参
//	int arr[3][4][5] = { 0 };
//	test(arr);

	//int arr[10] = { 1,2,3 };
	//test(arr);
	//指针数组（是数组），数组指针（是指针）
//	int* arr2[20] = { 0 };
//	//IntPtr arr2[20]={0};
//	test2(arr2);
//}



////第一次考试卷子
////求最小公倍数
//
//int minGongBei(int x, int y) {
//	//先找到x和y的较大值
//	int maxNum = x > y ? x : y;
//	for (int i = maxNum;i <= x * y;i++) {
//		if (i % x == 0 && i % y == 0) {
//			return i;
//		}
//	}
//	return 0;//此处的return一定不会触发
//}
//
//
//int main() {
//	//在线OJ系统往往会输入多组用例
//	//每一组用例是输入两个整数而已
//	//int x = 0;
//	//int y = 0;
//	//scanf("%d %d", &x, &y);//一般这种只输入两组数据的写法是不行的，不能通过OJ系统全部用例
//	while (1) {
//		int x = 0;
//		int y = 0;
//		int n=scanf("%d %d", &x, &y);//注意！！题目所给的数字之间有空格此处输入也要写空格
//		//scanf的返回值表示读到的数据的个数
//		//如果用户真的输入了两个整数，此时scanf就会返回2
//		if (n < 2) {
//			break;
//		}
//		int result = minGongBei(x, y);
//		printf("%d\n", result);//注意！！一定不能写成result=%d ！！
//        //输入输出格式必须严格按照题目要求，否则自动评卷时不能通过
//		//结果要不要独占一行，也不一定，看题目要求，没有明确要求就都试试
//	}
//	return 0;
//}


//倒置字符串
//将一句话的单词进行倒置，标点不倒置。例如：I like beijing. 经过函数后变为beijing. like I

//先创建一个reverse函数
//这是相当于针对一个指定的范围进行逆置
//str是这个范围的起始位置
//str1+len这是范围的结束位置
//[str,str+len) 针对这个范围进行逆置
#include<string.h>
void reverse(char*str,int len) {
	char* left = str;
	char* right = str + len - 1;
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


void reverseWord(char* input) {
	//先针对整个字符串进行逆序
	reverse(input, strlen(input));
	//再针对每个单词进行逆序
	char* start = input;
	while (*start != '\0') {
		//start相当于表示当前单词的开始位置
		//还需要找到当前单词的结束位置
		//知道了单词的开始位置，知道了单词的结束位置
		//就可以针对这个单词进行逆序了
		char* end = start;
		while (*end != ' ' && *end != '\0') {
			end++;
		}
		//当上面的while循环结束了之后，预期end指向了该单词的末尾
		reverse(start, end - start);//针对一个单词进行逆置
		//这个单词逆置完了就需要继续往后走了
		if (*end == '\0') {
			//end指向结尾
			//全都逆置完毕了
			break;
		}
		else {
			//end指向空格
			//就应该继续来处理下一个单词
			start = end + 1;
		}
	}
}

int main() {
	//接下来进行后续操作
	while (1) {
		//先读取这个字符串进来
		//不能用scanf函数输入  
		//scanf("%s");读取字符串，遇到 空格 就结束了
		//此处我们是预期读到一个完整的行（包含空格的）
		char input[1024] = { 0 };
		char* ret = gets(input);
		if (ret == NULL) {
			//读取数据完毕
			break;
		}
		reverseWord(input);
		//打印最终的逆置之后的结果
		printf("%s",input);
	}
	return 0;
}
