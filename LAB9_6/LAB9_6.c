/*
LAB9_6 ������к� 201820247 3�г� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n);
int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int prime = isPrime(num);
	if (prime == 1) {
		printf("�Ҽ��Դϴ�.\n");
	}
	else {
		printf("�Ҽ��� �ƴմϴ�.\n");
	}
	
	
	
}
int isPrime(int n)
{
	int count = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 1) {
		return 1;
	}
	else {
		return 0;
	}
}
