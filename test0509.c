#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("%d\n", sizeof(int*));
	system("pause");
	return 0;
}


//ָ������
#include<stdio.h>
#include<stdlib.h>
int main() {
	int* p =(int*)0x100;//�� char*p=0; �ǵȼ۵�
	printf("%p\n", p+1);
	//ָ��+1�����ǵ����ĵ�ַ+1��
	//���ǵ�ַҪ����һ��ֵ��ʹ���ָ���ܹ�ָ����һ��Ԫ��~
	system("pause");
}

//���scanfδ����������
//����
int ret = scanf("%d", &num);
(void)ret;
//���ô��� Ϊ����������



// ͨ��ָ������������
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 9,5,2,7 };
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int* p = arr;p < arr + size;p += 1) {
		printf("%d\n", *p);
	}
	system("pause");
	
}


//�ж�һ����ַ�ǲ�����Ч��ַ
#include<stdio.h>
#include<stdlib.h>
int main() {
	int num = 10;
	int* p = &num;
	if (p != NULL) {
		//�������������p��һ������Ч��ַ,��Ҫ���ÿ��˹�����֤
		printf("��ʱ��һ����Ч�ĵ�ַ��\n");
	}
	else {
		//pһ������Ч��ַ~~
		printf("��ʱ��һ����Ч�ĵ�ַ��\n");
	}
	system("pause");
}
//�ж�p�ǲ��ǿ� д����
if (p == NULL) {//�Ƽ�д��

}//���� ��̫�Ƽ���������д�����ɶ��ԱȽϲ�
if (!p) {

}
//���ߵȼ�

//�����ַ����Ƚ�
//�Ƚ������ַ���������ֱ��ʹ��==
//�ַ�����C����ʹ���ַ���������ʾ��
// C���ֲ�֧������������==�Ƚ�
// �����ǳ��ԱȽ�������������ʱ�򣬴�ʱ����������ʽת����ָ����
// �����ıȽϾͱ����ָ��Ƚ�~
//Ҫ��Ƚ��ַ���������ʹ��strcmp
#include<stdio.h>
int main() {
	/*char str1[] = "hello";
	char str2[] = "hello";*/
	char* str1 = "hello";
	char* str2 = "hello";
	if (str1 == str2) {
		printf("hehe\n");
	}
	else {
		printf("haha\n");
	}
	return 0;
}


//ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//arr��һ������һά����
//�����������������Ԫ�ض���������������Ҫ����һ��int�͵�ָ�룬���α��������е�����Ԫ��
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);//������鳤��
	int* p = arr;//����ָ���������ʼ�����������������������Ԫ�صĵ�ַ
	for (int i = 0;i < size;i++) {
		printf("%d ", *p);//ȡ��p��ָ��λ�õ�Ԫ��
		p += 1;//��ȡ��p����һ��λ��
	}
	system("pause");
	return 0;
}
//Ҳ����д������������ʽ
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

//дһ����������������һ���ַ��������ݡ�
//���������
#include<stdio.h>
#include<stdlib.h>


���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//�����������ͬλ��Ҫ�õ���λ���^����ͬΪ0����ͬΪ1������m��n��λ���m^n��
//��ʱm��n��ͨ�Ķ�����λ���㣬��ͬ�Ķ����Ʊ���λΪ1
//ͳ�������ɺ�����tmp���Ķ����Ʊ���λ���ж��ٸ�1���ɣ����ð�λ�룩
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int diffBit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp) {//��tmp!=0;�ȼ�
		tmp = tmp & (tmp - 1);//ͳ�������ж��ٸ�1
		count++;
	}
	return count;
}
int main() {
	int m, n;
	while (scanf("%d %d", &m, &n) == 2) {
		printf("%d\n", diffBit(m,n));
	}
	return 0;
}

