//��̨������ : һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
//�����������һ��n��̨���ܹ��ж�����������
//�������:��̨����Ϊ1ʱ��ֻ��һ��������̨����Ϊ2ʱ������������
//��̨����n>2ʱ����һ�����������ֲ�ͬ��ѡ��
// һ�ǵ�һ����1������ʱ������Ŀ���ں���ʣ�µ�n-1��̨�׵�������Ŀ����Ϊf(n-1)
// ���ǵ�һ����2������ʱ������Ŀ���ں���ʣ�µ�n-2��̨�׵�������Ŀ����Ϊf(n-2)
// ���n��̨�׵Ĳ�ͬ��������Ϊf(n)=f(n-1)+f(n-2)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int jumpFloor(int number) {
    // write code here
    if (number <= 2) {
        return 2;
    }
    return jumpFloor(number - 1) + jumpFloor(number - 2);
}
int main() {
    int number = 0;
    printf("����������Ҫ����̨������");
    scanf("%d", &number);
    printf("%d", jumpFloor(number));
    return 0;
}