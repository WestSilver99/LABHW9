/*
LAB9_1 영어영문학부 201820247 3학년 서은
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