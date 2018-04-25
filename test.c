#include "test.h"

int main()
{
	int a = 0, b = 2, c = 3;
	printf("2 + 3 = %d\n",sum(b, c));
	printf("2 - 3 = %d\n",sub(b, c));
	printf("2 * 3 = %d\n",mult(b, c));
	return 0;
}

int sum(int sum1, int sum2)
{
	return (sum1 + sum2);
}

int sub(int sub1, int sub2)
{
	return (sub1 - sub2);
}

int mult(int mult1, int mult2)
{
	return (mult1 * mult2);
}
