//Program to display weekdays according to the given number
#include <stdio.h>
void main()
{
	int weekDay;
	printf("Enter WeekDay in Numbers:");
	scanf("%d", &weekDay);
	switch (weekDay)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("ERROR - Enter No. between 1 to 7");
	}
}
