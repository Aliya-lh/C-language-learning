//��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
//����6=1��2��3.
//����ҳ�1000���ڵ�����������

#include<stdio.h>
#define N 1000
int main()
{
    int i, t, k, n, sum;
    int a[256];
    for (i = 2;i <= N;i++)
    {
        sum = a[0] = 1;
        k = 0;
        for (t= 2;t<= (i / 2);t++)
        {
            if (i % t == 0)
            {
                sum += t;
                a[++k] = t;
            }

        }
        if (i == sum)
        {
            printf("%d=%d", i, a[0]);
            for (n = 1;n <= k;n++)
                printf("+%d", a[n]);
            printf("\n");
        }

    }
    return 0;
}
