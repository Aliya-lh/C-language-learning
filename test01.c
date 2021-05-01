//#include <stdio.h>
//int main()
//{
//	int a, b, sum;
//	a = 123;
//	b = 456;
//	sum = a + b;
//	printf("sum is %d\n",sum);
//	return 0;
//	}

#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, s, area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
		s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("a=%f\tb=%f\tc=%f\n", a, b, c);
	printf("area=%f\n", area);
	return 0;
}