/*
HW9_2 ������к� 201820247 3�г� ����
*/
#include <stdio.h>
int sumMToN(int m, int n); // �Լ��� ����
int main(void)
{
	printf("%d���� %d������ ���� %d\n", 2, 5, sumMToN(2, 5));
	printf("%d���� %d������ ���� %d\n", 3, 7, sumMToN(2, 7));
	printf("%d���� %d������ ���� %d\n", 2, 10, sumMToN(2, 10));

}
int sumMToN(int m, int n) 
{
	int sum = 0;
	
	for (m; m <= n; m++) {
		sum += m;
	}
	return sum;
}