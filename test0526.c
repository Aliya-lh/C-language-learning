//跳台阶问题 : 一只青蛙一次可以跳上1级台阶，也可以跳上2级。
//求该青蛙跳上一个n级台阶总共有多少种跳法。
//程序分析:当台阶数为1时，只有一种跳法，台阶数为2时，有两种跳法
//当台阶数n>2时，第一次跳就有两种不同的选择，
// 一是第一次跳1级，此时跳法数目等于后面剩下的n-1级台阶的跳法数目，即为f(n-1)
// 二是第一次跳2级，此时跳法数目等于后面剩下的n-2级台阶的跳法数目，即为f(n-2)
// 因此n级台阶的不同跳法总数为f(n)=f(n-1)+f(n-2)
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
    printf("请输入青蛙要跳的台阶数：");
    scanf("%d", &number);
    printf("%d", jumpFloor(number));
    return 0;
}