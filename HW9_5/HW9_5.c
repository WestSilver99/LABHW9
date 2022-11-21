/*
HW9_5 영어영문학부 201820247 3학년 서은
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int accumulator(char op, int n, int prevResult);
int main(void)
{
	int result = 0;
	printf("%d ", result);
	while (1)
	{
		char op;
		int n;
		scanf(" %c%d", &op, &n);
		if (op == '0' && n == 0)
			break;
		result = accumulator(op, n, result);
		printf("= %d ", result);

	}
	return 0;
}
int accumulator(char op, int n, int prevResult)
{
	switch (op)
	{
	case '+':
		return (prevResult + n);
	case '-':
		return (prevResult - n);
	case '*':
		return (prevResult * n);
	case '/':
		return (prevResult / n);
	}
}