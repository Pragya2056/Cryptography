#include <stdio.h>
int gcd(int a, int b)
{
	int rem;
	if (a == 0)
	{
		return (b);
	}

	else if (b == 0)
	{
		return (a);
	}

	else
	{
		while (b != 0)
		{
			rem = a % b;
			a = b;
			b = rem;
		}
		return (a);
	}
}
int main()
{
	int num1, num2, result;
	printf("Enter two numbers to find gcd: ");
	scanf("%d%d", &num1, &num2);
	result = gcd(num1, num2);
	printf("GCD of %d and %d is: %d ", num1, num2, result);
	return 0;
}
