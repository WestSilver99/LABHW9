/*
HW9_3 ������к� 201820247 3�г� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
int getMax(int x, int y, int z);
int main(void)
{
	int num1, num2, num3;
	int bigNumber;
	printf("Enter a numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	bigNumber = getMax(num1, num2, num3);
	printf("Big number is %d.\n", bigNumber);
	return 0;
}

int getMax(int x, int y, int z)
{
	if (x >= y && x >= z) {
		return x;
	}
	else if (y >= x && y >= z) {
		return y;
	}
	else {
		return z;
	}
}
