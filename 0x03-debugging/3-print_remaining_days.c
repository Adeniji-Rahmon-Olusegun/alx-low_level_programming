#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - takes a date and prints how manu days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int i;
	int month_sum = 0;
	int days_unspent;
	int days_spent_so_far_in_year;
	int months_in_year[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((year % 4 == 0 || year % 400 == 0) && (year % 100 != 0))
	{
		months_in_year[1] = 29;

		for (i = 0; i < month - 1; i++)
		{
			month_sum += months_in_year[i];
		}

		days_spent_so_far_in_year = month_sum + day;
		days_unspent = 366 - days_spent_so_far_in_year;

		printf("Day of the year: %d\n", days_spent_so_far_in_year);
		printf("Remaining days: %d\n", days_unspent);
	}
	else if (day < 1 || day > 31 || month < 1 || month > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		for (i = 0; i < months - 1; i++)
		{
			month_sum += months_in_year[i];
		}

		days_spent_so_far_in_year = month_sum + day;
		days_unspent = 365 - days_spent_so_far_in_year;

		printf("Day of the year: %d\n", days_spent_so_far_in_year);
		printf("Remaining days: %d\n", days_unspent);
	}
}
