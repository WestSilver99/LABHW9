/*
HW9_1 ������к� 201820247 3�г� ����
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
