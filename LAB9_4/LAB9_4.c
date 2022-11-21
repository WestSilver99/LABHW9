/*
LAB9_4 영어영문학부 201820247 3학년 서은
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void divisors(int n); 
int main(void)
{
	int num;

	printf("양의 정수?");
	scanf("%d", &num);

	while (num != 0) {
		divisors(num);
		printf("양의 정수?");
		scanf("%d", &num);
	}
	return 0;
}
void divisors(int n) 
{
	int count = 0;
	printf("%d의 약수: ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
			printf("%d ", i);
		}
	}
	printf("=> %d개\n", count);
}
