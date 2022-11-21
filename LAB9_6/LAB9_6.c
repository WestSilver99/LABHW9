/*
LAB9_6 영어영문학부 201820247 3학년 서은
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
		printf("소수입니다.\n");
	}
	else {
		printf("소수가 아닙니다.\n");
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
