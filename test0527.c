////33. ʹ��ָ���ӡ��������
////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
////arr��һ������һά���顣
////�����������������Ԫ�ض���������������Ҫ����һ��int�͵�ָ�룬���α��������е�����Ԫ��
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//����ָ���������ʼ��,�������������������Ԫ�صĵ�ַ
//	int* p = arr;
//	for (int i = 0;i < size;i++) {
//		printf("%d ", *p);//ȡ��p��ָ��λ�õ�Ԫ��
//		p += 1;//��ȡ��p����һ��λ��
//	}
//	return 0;
//}
//
//

//
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int* p = arr;p < arr + size;p += 1) {
//		printf("%d ", *p);
//	}
//	return 0;
//}

//35. дһ��������ÿ����һ������������ͻὫnum��ֵ����1
#include<stdio.h>
void func(int* num) {
	(*num)++;
}

int main() {
	int num = 0;
	func(&num);
	printf("%d\n", num);
}