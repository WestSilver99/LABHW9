/*
LAB9_1 ������к� 201820247 3�г� ����
*/
#include <stdio.h>

void printManyStars(int num);
int main(void)
{
	printManyStars(3);
	printManyStars(4);
	printManyStars(5);


}

void printManyStars(int num) {

	int i;
	for (i = 0; i < num; i++) {
		printf("*");
	}
	printf("\n");
}