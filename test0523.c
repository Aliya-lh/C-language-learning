//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵��
//��֪3����˵���滰��1����˵���Ǽٻ���
#include<stdio.h>
#include<stdlib.h>
int main() {
	int killer = 0;
	for (killer = 'A';killer <= 'D';killer++) {
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3) {
			printf("�����ǣ�%c", killer);
		}
	}
	system("pause");
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int murder[4] = { 0 };//Ĭ���ĸ��˶���������
//	int i = 0;
//	for (i = 0;i < 4;i++) {//���������ĸ����е�ĳ����������
//		murder[i] = 1;//����ĳ����������
//		if ((murder[0] != 1 )+
//			(murder[2] == 1 )+ 
//			(murder[3] == 1 )+
//			(murder[3] != 1) == 3) {
//			break;//���������ʹ��������ˣ�
//		}
//		murder[i] = 0;//�����㻹�����
//	}
//	putchar('A' + i);//��ӡ���ֵı�ţ�
//	//���ǵı����0 1 2 3������'A'����A B C D
//	system("pause");
//	return 0;
//}