/*
LAB9_3 ������к� 201820247 3�г� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multiples(int num, int count);
int main(void)
{
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);
	while (num > 0) {
		multiples(num, 10);
		printf("Enter the number: ");
		scanf("%d", &num);
	}
	return 0;

}
void multiples(int num, int count)
{

		for (int j = num; j <= num*count; j++) {
			if (j%num==0) {
				printf("%d ", j);
			}
		
	}
	printf("\n");
}
