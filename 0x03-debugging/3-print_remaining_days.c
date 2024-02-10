#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int i;
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int total_days = 0;

	/* Check if it's a leap year */

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		days_in_month[2] = 29; /* Update February to have 29 days */
	}

	/* Calculate total days up to given month */

	for (i = 1; i < month; i++)
	{
		total_days += days_in_month[i];
	}

	/* Add days in current month */

	total_days += day;

	/* Print results */

	if (month > 12 || day > days_in_month[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else if (month == 2 && day == 29)
	{
		printf("Day of the year: %d\n", total_days - 1);
		printf("Remaining days: %d\n", 366 - total_days);
	}
	else
	{
		printf("Day of the year: %d\n", total_days);
		printf("Remaining days: %d\n", 365 - total_days);
	}
}
