#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	int rand1 = rand() % 100;
	int rand2 = rand() % 100;

	int correct_answer = rand1 + rand2;

	time_t start_time = time(NULL);

	printf("What is %d + %d? ", rand1, rand2);
	int user_answer;

	scanf("%d", &user_answer);

	time_t end_time = time(NULL);

	int iq_level = 100 * (end_time - start_time) / (rand1 + rand2);

	if (user_answer == correct_answer)
	{
		printf("Correct! Your IQ is %d%%. \n", iq_level);
	}
	else
	{
		printf("Wrong! The correct answer is %d. Your IQ is %d%%. \n", correct_answer, iq_level);
	}
	return (0);
}
