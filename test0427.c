//ð������
#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int size) {
	//дһ�´Ӻ���ǰ�����İ汾
	//ÿ�δӺ���ǰ�����Ƚ�����Ԫ�أ�ÿһ���ܰ���С��ֵ�ŵ���ǰ��
	//bound=>�߽磬ʹ�����������ֵ��ʾ����������ʹ���������ķֽ���
	//[0,bound)����������
	//[bound,size)����������
	int bound = 0;
	for (;bound < size;bound++) {
		//ͨ�����ѭ�������ƺ����Ƚ�����Ԫ�صıȽ�����
		//������ȥʵ��һ�˱ȽϽ����Ĺ���
		for (int cur = size - 1;cur > bound;cur--) {
			//����Ԫ�أ�������curΪ��׼
			//cur-1��cur+1,����cur�Ǵ�szie-1��ʼ��
			//�Ͳ���ʹ��cur+1��Ϊ����Ԫ���ˣ�������cur-1
			//�μ������±�һ������Խ�磡��
			if (arr[cur - 1]> arr[cur]) {
				//�����������������ͽ��н���
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;

			}
		}
	}
 }
int main() {
	int arr []= { 9,5,2,7,3,6,8};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0;i < size;i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
}