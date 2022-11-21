/*
HW9_1 영어영문학부 201820247 3학년 서은
*/

#include <stdio.h>
void print5Chars(char ch);
int main(void)
{
	print5Chars('*', 5);
	print5Chars('@', 7);
	print5Chars('1', 10);

	
}

void print5Chars(char ch, int n)
{
	
	for (int i = 0; i < n; i++) {
		printf("%c", ch);
	}
	printf("\n");
}
