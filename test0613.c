#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	//����"hello"������a�ַ���������ֻ���ڴ��д�һ�ݼ��ɣ�����Ҫ�洢���
//	//ֻ���ڴ��д�һ�ݼ��ɣ�����Ҫ�洢���
//	//Ӧ��ʹ��strcmp���Ƚ��ַ���������
//	char* p1 = "hello";
//	char* p2 = "hello";
//	char p3[] = "hello";
//	char p4[] = "hello";
//
//	p3[0] = 'a';
//	printf("%s\n", p4);//��Ȼ��hello��������� p3 p4�ǲ�ͬ���ڴ�ռ�
//
//	p1[0] = 'a';
//	printf("%s\n", p2);//������� hello���ַ������������޸�
//	/*if (p1 == p2) {
//		printf("���\n");
//	}
//	else {
//		printf("�����\n");
//	}
//	if (p3 == p4) {
//		printf("���\n");
//	}
//	else {
//		printf("�����\n");
//	}*/
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int arr[] = { 1,2,3,4 };
//	//arr��&arr�õ��������ֲ�ͬ���͵�ָ��
//	//arr�ܹ��õ�int*   &arr�õ�����int(*)[4] 
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);
//	system("pause");
//	return 0;
//}


 

//һά���鴫�μ��ַ�ʽ
//void test(int arr[]) {
//	printf("hello");
//}

//void test(int arr[10]) {
//	printf("hello");
//}

//���鳤�ȵ���Ϣ�Ѿ��ڴ��ε�ʱ��ʧ�� 
//void test(int arr[20]) {//����д��Ҳ����  ���Ĳ������飬������ָ�룡�� 
//	printf("hello");
// }

//void test(int* arr) {//����д���൱�����
//	printf("hello");
//}

//void test2(int* arr[20]) {
//	printf("hello");
//}


////����ָ�봫�ο���ʹ��int**
//void test2(int** arr) {
//	printf("hello");
//}

////Ҳ����ʹ��typedef
//typedef int* IntPtr;
//void test2(IntPtr* arr) {
//	printf("hello");
//}

////��ά���鴫��
//void test(int arr[3][4]) {//����  �ȼ�ת������
//	//void test(int (*arr)[4])      arr������int(*)[4],��ʵ����ʽת�ɵ�ָ����int(*)[5]  ���Ͳ�ͬ
//
//}

//void test(int** arr) {
//	//����
//}

////��ά���鴫��
////�����Ƽ�д����һ���ǶԵ� 
//void test(int arr[3][4][5]) {
//
//}

////����д��Ҳ�ǿ��Ե�
//void test(int arr[10][4][5]) {
//
//}

////����д��Ҳ����
//void test(int arr[][4][5]) {
//
//}


////����д�������ԣ���
////�β�����int(*)[10][5]  ʵ������int(*)[4][5]
//void test(int arr[][10][5]) {
//
//}

//void test(int arr[][][5]) {//�����ԣ���
//
//}

//int main() {
//	//��ά���鴫��
//	int arr[3][5] = { 0 };
//	//��ά���鴫��
//	int arr[3][4][5] = { 0 };
//	test(arr);

	//int arr[10] = { 1,2,3 };
	//test(arr);
	//ָ�����飨�����飩������ָ�루��ָ�룩
//	int* arr2[20] = { 0 };
//	//IntPtr arr2[20]={0};
//	test2(arr2);
//}



////��һ�ο��Ծ���
////����С������
//
//int minGongBei(int x, int y) {
//	//���ҵ�x��y�Ľϴ�ֵ
//	int maxNum = x > y ? x : y;
//	for (int i = maxNum;i <= x * y;i++) {
//		if (i % x == 0 && i % y == 0) {
//			return i;
//		}
//	}
//	return 0;//�˴���returnһ�����ᴥ��
//}
//
//
//int main() {
//	//����OJϵͳ�����������������
//	//ÿһ������������������������
//	//int x = 0;
//	//int y = 0;
//	//scanf("%d %d", &x, &y);//һ������ֻ�����������ݵ�д���ǲ��еģ�����ͨ��OJϵͳȫ������
//	while (1) {
//		int x = 0;
//		int y = 0;
//		int n=scanf("%d %d", &x, &y);//ע�⣡����Ŀ����������֮���пո�˴�����ҲҪд�ո�
//		//scanf�ķ���ֵ��ʾ���������ݵĸ���
//		//����û����������������������ʱscanf�ͻ᷵��2
//		if (n < 2) {
//			break;
//		}
//		int result = minGongBei(x, y);
//		printf("%d\n", result);//ע�⣡��һ������д��result=%d ����
//        //���������ʽ�����ϸ�����ĿҪ�󣬷����Զ�����ʱ����ͨ��
//		//���Ҫ��Ҫ��ռһ�У�Ҳ��һ��������ĿҪ��û����ȷҪ��Ͷ�����
//	}
//	return 0;
//}


//�����ַ���
//��һ�仰�ĵ��ʽ��е��ã���㲻���á����磺I like beijing. �����������Ϊbeijing. like I

//�ȴ���һ��reverse����
//�����൱�����һ��ָ���ķ�Χ��������
//str�������Χ����ʼλ��
//str1+len���Ƿ�Χ�Ľ���λ��
//[str,str+len) ��������Χ��������
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
	//����������ַ�����������
	reverse(input, strlen(input));
	//�����ÿ�����ʽ�������
	char* start = input;
	while (*start != '\0') {
		//start�൱�ڱ�ʾ��ǰ���ʵĿ�ʼλ��
		//����Ҫ�ҵ���ǰ���ʵĽ���λ��
		//֪���˵��ʵĿ�ʼλ�ã�֪���˵��ʵĽ���λ��
		//�Ϳ������������ʽ���������
		char* end = start;
		while (*end != ' ' && *end != '\0') {
			end++;
		}
		//�������whileѭ��������֮��Ԥ��endָ���˸õ��ʵ�ĩβ
		reverse(start, end - start);//���һ�����ʽ�������
		//��������������˾���Ҫ������������
		if (*end == '\0') {
			//endָ���β
			//ȫ�����������
			break;
		}
		else {
			//endָ��ո�
			//��Ӧ�ü�����������һ������
			start = end + 1;
		}
	}
}

int main() {
	//���������к�������
	while (1) {
		//�ȶ�ȡ����ַ�������
		//������scanf��������  
		//scanf("%s");��ȡ�ַ��������� �ո� �ͽ�����
		//�˴�������Ԥ�ڶ���һ���������У������ո�ģ�
		char input[1024] = { 0 };
		char* ret = gets(input);
		if (ret == NULL) {
			//��ȡ�������
			break;
		}
		reverseWord(input);
		//��ӡ���յ�����֮��Ľ��
		printf("%s",input);
	}
	return 0;
}
