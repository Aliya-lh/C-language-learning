////������������С������
////1.���巨
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {//������������
//	int i = 0;
//	int m, n, tmp;
//	printf("������������������");
//		scanf("%d%d", &m, &n);
//	if (m < n) {//�Ƚ����������Ĵ�С�����ϴ�������m��
//		tmp = n;
//		n = m;
//		m = tmp;
//	}
//	for (i = m;i > 0;i++) {//�ӽϴ�����ʼ�ҷ�����������С������
//		if (i % m == 0 && i % n == 0) {
//			printf("%d��%d����С�������ǣ�%d",m,n, i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//
////�������������Լ��
////���ñ�����⣡�����Լ��һ��������[1,min(x,y)]֮��
//#include<stdio.h>
//#include<stdlib.h>
//
//int maxGongYueShu(int x, int y) {
//	int min = x < y ? x : y;//������Ŀ�����
//	int result = 1;
//	for (int i = 1;i <= min;i++) {
//		if (x % i == 0 && y % i == 0) {
//			result = i;
//		}
//	}return result;
//}
//int main() {
//	printf("%d\n", maxGongYueShu(100,150));
//	system("pause");
//	return 0;
//}




//�ṹ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct Student {//{}������ýṹ��ġ���Ա��
//	int id;
//	char name[10];
//};
////typedef struct Student Student;
////���� #define Student struct Student


typedef struct Student {
	int id;
	char name[1024];
}Student;//���Student����ȫ�ֱ����ˣ��������͵ļ�
//��������൱��������������ĺ��壬�ܳ���������



int main() {
	//���������Ǵ�����һ�����������ֽ�student
	// ������������;���struct Student
	
	//ǰ����typedef�Ա�����������Ҳ����д������
	//Student student ={10,"zhangsan"};
	struct Student student = { 10,"zhangsan" };
	//student ={20,"lisi"};
	// ����ֱ�ӶԽṹ������ʹ��{}��ֵ��ֻ�����ÿ����Ա�ֱ�ֵ
	
	student.id = 20;//. �ǳ�Ա�������㣬����������൱�ڡ��ġ�
	//student.name = "lisi";����д���Ǵ���ģ������鲻����=��ֵ
	
	strcpy(student.name, "lisi");
	//���ֶ�����Ԫ�������ֵ�ķ���̫�鷳��ʵ�ʲ����õ�
	/*student.name[0] = 'l';
	student.name[1] = 'i';
	student.name[2] = 's';
	student.name[3] = 'i';
	student.name[4] = '\0';
	*/
	printf("%d\n", student.id);
	printf("%s\n", student.name);
	
	
	
	system("pause");
	return 0;
}