#include<stdio.h>
void swap(int* x, int* y) {
	//�����ò��� 
	//x=&a
	//�˴���*x��a�ǵȼ۵�
	//y=&b
	//�˴���*y��b�ǵȼ۵�
	int tmp = *x;
	*x = *y;
	*y= tmp;
}

int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);

}



//дһ�������ж�һ�����ǲ�������
//����ֵ�趨Ϊint  �������ͷ���1�����������ͷ���0
//is it a prime num?

 #include<stdio.h>
int isPrime(int num){
	if (num==0||num == 1) {
		return 0;
	}
	for (int i = 2;i < num;i++) {
		if (num % i == 0) {
			//������������ҵ������ˣ�����
			return 0;
		}
	}
	//ѭ������Ҳû�ҵ���������ǰ����Ϊ������
	return 1;
}
int main(){
	printf("%d\n",isPrime(1));
}



//дһ�������ж�һ���ǲ�������
 #include<stdio.h>
int isLeapYear(int year) {
	if (year % 100 == 0) {//��������
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
		//��ͨ����
	}


int main() {
	printf("%d\n", isLeapYear(1984));
}


//дһ��������ʵ��һ��������������Ķ��ֲ���
//����arr��ʾ�����ҵ�����
//toFind��ʾҪȥ��������
//�β������int arr[]�Ѿ�����һ�������ˣ���ʽת������һ��ָ��
//int*

 #include<stdio.h>
int binarySearch(int* arr, int size,int toFind) {
	int left = 0;
	int right = size-1;
	//[left,right]������һ��������
	//ֻҪ������䲻Ϊ�գ�����Ҫ���в���
	while (left <= right) {
		int mid = (left + right) / 2;
		if (toFind < arr[mid]) {
			//ȥ������
			right = mid - 1;
		}else if (toFind>arr[mid]) {
			//ȥ�Ҳ����
			left = mid + 1;
		}else {
			//�ҵ��� �˴�����ʹ�ú�������ֵ��ʾ�ҵ���Ԫ�ص��±�λ��
			//��ò�Ҫֱ��printf
			//����Ҳ��֪�������ߵ��������õ����֮��զ��
			//�������������Ҫ��ӡ��Ҳ��������Ҫ��¼�ļ���Ҳ�����ǲ�����������
			//��Щ������binarySesrch�����������Ӧ�ÿ��ǵ�����
			//һ������ֻ��һ�����飡��
			return mid;
		}
	}
	//��������ѭ�����Ҳû�ҵ����ʵ�Ԫ�أ���Ϊû�ҵ�
	//����һ����Ч���±꣬ͨ�����Ƿ���-1
	return -1;
	
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int size= sizeof(arr) / sizeof(arr[0]);
	//C�����������鳤�Ⱥ���������ĵ����÷�
	int ret=binarySearch(arr,size,6);
	printf("ret=%d\n", ret);
}



//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//��������
 #include<stdio.h>
void func(int* num) { //��������
	(*num)++;
}

int main() {
	int num = 0;
	func(&num);
	printf("%d\n", num);
}



//�ݹ�
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//����:1234 �����1 2 3 4
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


//��дһ����������������ʱ���������ַ����ĳ���
#include<stdio.h>
int myStrlen(char str[]) {
	//���ַ�����ͷ��ʼ�����������ң�\0
	//ÿ������һ���ַ����������\0,��count++
	//����\0��ѭ������������count����
	int count = 0;
	while (str[count] != '\0') {
		count++;
	}
	return count;
}

int main() {
	printf("%d\n", myStrlen("abcd"));
}

//������ô����ֲ����������߲���ʹ��ѭ�����Ϳ��Կ����µݹ�
#include<stdio.h>
int myStrlen2(char* str) {
	if (str[0] == '\0') { //˵��û�кϷ��ַ�������
		return 0;
	}
	return 1 + myStrlen2(str + 1);
}

int main() {
	printf("%d\n", myStrlen2("abcd"));
	return 0;
}

//�õݹ鷽����5��
#include<stdio.h>
int factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factor(n - 1);
}

int main() {
	printf("%d\n", factor(5));
	return 0;

}


//쳲���������
#include<stdio.h>
int fib(int n) {
	if (n == 1 || n== 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	printf("%d\n", fib(5));
	return 0;

}

//�ǵݹ� ͨ��ѭ���ķ�ʽ
#include <stdio.h>
int fib2(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	//ʹ�ñ���i��ʾ��ǰ��
	int last2 = 1;//i-2��
	int last1 = 1;//i-1��
	int cur = 0;//��ǰ��i��Ľ��
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


//��������
//#define SIZE 4 //����ʹ�ú�
//Ҳ����ö��
enum {
	SIZE=4,
};

#include<stdio.h>
int main() {
	const int n = 4;
	int n = 4;
	int arr[SIZE] = { 0 };
	//Ҳ����ʹ��count
	//int arr[n] = { 0 };
}
#include<stdio.h>
int main() {
	int arr[10] = { 0 };
	//ͨ��ѭ���ķ�ʽ����������鶼����һ��ֵ����1-10
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 1;
	}
	for (int i = 0;i < 10;i++) {
		printf("%d\n", arr[i]);
	}
}

