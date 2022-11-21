/*
LAB9_5 ������к� 201820247 3�г� ����
*/

#include <stdio.h>
int is_leap_year(int year);
int main(void)
{
	int i;
	int cnt = 0;
	for (i = 2000; i <= 2100; i++) {
		if (is_leap_year(i))
			printf("%d ", i);
		cnt++;
		if (cnt % 40 == 0) {
			printf("\n");
		}
	}
	return 0;
}
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}