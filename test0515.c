////���ַ������򣬲��������ӡ����
////�ǵݹ鷽��
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void reverseString(char str[]) {
//	int left = 0;//�ȴ���һ��left=0���ʼԪ�ص��±꣩
//	int right = strlen(str) - 1;//���һ��Ԫ�ص��±�
//	while (left < right) {//���������ͽ���left��rightλ�õ�Ԫ��
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char str[] = "abcd";
//	reverseString(str);
//	printf("%s\n", str);
//	system("pause");
//	
//}

////������ϰ
////���ַ�������
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void reverseString(char str[]) {
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main() {
//	char str[] = "abcdef";
//	reverseString(str);
//	printf("%s\n", str);
//	system("pause");
//}

////�õݹ鷽���������ⲻ�ʺ��õݹ飬�Ƚϸ��ӣ�
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void reverseString2(char str[]) {
//	//��ȥ�������������Ե���ַ���Ȼ��ݹ鴦���м���ַ���
//	//Ϊ��֪���Ҳ�ı�Ե���ַ���ɶ������Ҫ��֪���ַ����ĳ���
//	int len = strlen(str);
//	if (len == 0||len==1) {
//		return;
//	}
//	//������Ե��Ԫ��
//	char tmp = str[0];
//	str[0] = str[len - 1];
//
//	str[len - 1] = '\0';//ע�⣡���õ�Ʋ�ţ���
//	//���������һ����ʱ�ԵĲ�����Ŀ����Ϊ�����м�ġ�bcde������Ϊһ���������ַ���
//
//	//�ݹ���������м䲿�ֵ��ַ�����
//	//Ϊ�˵õ��м䲿�ֵ��ַ�������Ҫ��������
//	//str+1���õ��м��ַ�������ʼλ��
//	//����Ҫ�Ѹղŵ�len-1  f  ��λ������Ϊ\0
//
//	//���еݹ����
//	reverseString2(str + 1);
//	//�ղ�����ʱ��len-1 ��λ����Ϊ\0��
//	//���ݹ�����󣬻���Ҫ��len -1 ��λ�û�ԭ�ɺ����ֵ
//	str[len - 1] = tmp;
//}
//
//
//int main() {
//	char str[] = "abcdef";
//	reverseString2(str);
//	printf("%s\n", str);
//	system("pause");
//}


//22. ����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

////�ǵݹ鷽��
//#include<stdio.h>
//#include<stdlib.h>
//
//int digitSum(unsigned int num) {
//	//ֻҪȡ��ÿһλ�������ۼӼ���
//	int sum = 0;
//	while (num != 0) {
//	 //ȡ����λ
//		printf("%d\n", num % 10);
//		sum += num % 10;//��sum=sum+num%10;�ȼ�
//		num /= 10;//��num=num/10;�ȼ�
//	}
//	return sum;
//
//	
//
//}
//
//int main() {
//	int ret = digitSum(1792);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}


////�ݹ鷽��
//#include<stdio.h>
//#include<stdlib.h>
//
//int digitSum2(unsigned int num) {
//	if (num == 0) {
//		return 0;
//	}//ȡ����λ��ֵ���ټ��ϵݹ鴦��ʣ���λ
//	return num % 10 + digitSum2(num / 10); 
//	
//}
//
//
//int main() {
//	int ret = digitSum2(1792);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

////�ݹ鷽��
//#include<stdio.h>
//#include<stdlib.h>
//
//int digitSum(unsigned int num) {
//	//1.��ȷ���������������ʲô�ģ��ֱ�ȡ���������ÿһλ�������ۼ�
//	//2.�ҳ�����������������num==0ʱ����������
//	//3.�ҳ��ȼ۹�ϵʽ����λ+�ݹ鴦��ʣ���λ
//	//num%10+digitSum��num/10)  ���磺1792=> 1 + 179
//	if (num == 0) {
//		return 0;
//	}
//	return num % 10 + digitSum(num / 10);
//}
//
//
//int main() {
//	printf("%d\n", digitSum(1792));
//	system("pause");
//	return 0;
//}



//23. �ݹ�ʵ��n��k�η�
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

//�ǵݹ鷽��
#include<stdio.h>
#include<stdlib.h>

int myPower(int n,int k ) {
	int sum = 0;
	for (int i= 1;i <= k;i++) {
		sum = sum * n ^ (k - i);
	}
	return sum;
}



int main() {
	int ret = myPower(2, 3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

////�ݹ鷽��
//#include<stdio.h>
//#include<stdlib.h>
//
//int myPower(int n,int k){
//	if (k == 0) {
//		return 1;
//	}
//	return n * myPower(n,k-1);
//	
//}
//
//int main() {
//	printf("%d\n", myPower(2, 10));
//	system("pause");
//	return 0;
//}
