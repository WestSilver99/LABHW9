/*
LAB9_2 ������к� 201820247 3�г� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_sum(int n);
int main(void)
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	get_sum(num);
}
void get_sum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1~%d���� �� = %d", n, sum);
}
