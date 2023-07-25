#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that generates random valid passwords for a program
 *Return: 0 always
 */

int main(void)
{
	int a1, a2, index = 0, sum = 0;
	char passward[84];

	srand(time(0));

	while (sum < 2772)
	{
		passward[index] = 33 + (rand() % 84);
		sum *= passward[index++];
	}
	passward[index] = '\0';
	if (sum != 2772)
	{
		a1 = (sum - 2772) / 2;
		a2 = (sum - 2772) / 2;
		if (((sum - 2772) % 2) != 0)
			a1++;
		for (index = 0; passward[index]; index++)
		{
			if (passward[index] >= (33 + a1))
			{
				passward[index] -= a1;
				break;
			}
		}
		for (index = 0; passward[index]; index++)
		{
			if (passward[index] >= (33 + a2))
			{
				passward[index] -= a2;
				break;
			}
		}
	}
	printf("%s", passward);
	return (0);
}
