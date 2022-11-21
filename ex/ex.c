#include <stdio.h> 
int main(void) {

	for (int i = 3; i <= 5; i++) {
		for (int j = 3; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}