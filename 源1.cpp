#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()				//取三者中最大的整数
{
	int a, b, c, temp, max;
	printf("请输入三个整数:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	temp = (a > b) ? a : b;				//将a和b的大者放到temp中
	max = (temp > c) ? temp : c;		//将a和b的大者与c比较，将最大者赋值给max
	printf("三个整数的最大值为:%d\n", max);
	return 0;
}