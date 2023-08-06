#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to get user's current age
 *
 * Return: Always 0
 */
int main(void)
{
	int cur_year = 2023;

	printf("Enter your year of birth: ");
	int birth_year = 0;

	scanf("%d", &birth_year);

	int user_age = cur_year - birth_year;

	printf("Your age is %d years old. \n", user_age);

	return (0);
}
