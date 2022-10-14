#include <stdio.h>

int main(void)
{
	int age;

	printf("What if you age");
	scanf("%d", &age);

	if (age > 18)
	{
		printf("You are good to and bet");
	} else if (age >= 0 && age < 18)
	{
		printf("Sorry You cannot bet");
	} else if (age < 0)
	{
		printf("Sorry you are not born yet");
	} else
	{
		printf("Sorry, we know nothing about you");
	}
	return (0);
}

