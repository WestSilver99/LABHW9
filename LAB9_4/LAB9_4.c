/*
LAB9_4 ������к� 201820247 3�г� ����
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void divisors(int n); 
int main(void)
{
	int num;

	printf("���� ����?");
	scanf("%d", &num);

	while (num != 0) {
		divisors(num);
		printf("���� ����?");
		scanf("%d", &num);
	}
	return 0;
}
void divisors(int n) 
{
	int count = 0;
	printf("%d�� ���: ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
			printf("%d ", i);
		}
	}
	printf("=> %d��\n", count);
}
