#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()				//ȡ��������������
{
	int a, b, c, temp, max;
	printf("��������������:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	temp = (a > b) ? a : b;				//��a��b�Ĵ��߷ŵ�temp��
	max = (temp > c) ? temp : c;		//��a��b�Ĵ�����c�Ƚϣ�������߸�ֵ��max
	printf("�������������ֵΪ:%d\n", max);
	return 0;
}