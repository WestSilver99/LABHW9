/*
LAB9_0 ������к� 201820247 3�г� ����
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