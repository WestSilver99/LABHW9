/*
HW9_4 ������к� 201820247 3�г� ����
*/
#include <stdio.h>
int isPrime(int n);
int main(void)
{
	int i = 2;
	int count = 0;
	while (count < 10) {
		if (isPrime(i)) {
			printf("%d��° �Ҽ��� %d\n", count + 1, i);
			count++;
		}
		i++;
	}

}
int isPrime(int n)
{
	int half = n / 2;
	if (n <= 1)
		return 0;
	for (int i = 2; i <= half; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}