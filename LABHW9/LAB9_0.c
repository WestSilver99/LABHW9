/*
LAB9_0 영어영문학부 201820247 3학년 서은
*/
#include <stdio.h>
void printStars(int num);
int main(void)
{
	for (int i = 0; i < 3; i++) {
		printStars(5);
	}

}

void printStars(int num) {
	int i;

	for (i = 0; i < num; i++) {
		printf("*");
	
	}
	printf("\n");
}