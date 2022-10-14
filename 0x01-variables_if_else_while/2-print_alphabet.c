#include <stdio.h>

int main(void)
{
	char grade;

	printf("Please enter your ypu grade to see remark\n");
	scanf("%c", &grade);

	switch(grade)
	case 'A':
		printf("You are excellent student");
		break;
	case 'B':
		printf("Good studentt");
		break;
	case 'C':
		printf("You did well");
		break;
	default:
		printf("No remark");
		return (0);
}
