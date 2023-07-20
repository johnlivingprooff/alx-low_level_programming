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
	int leapYear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	int m, totalDays, remDays;
	int mth[];

	mth[] = {0, 31, leapYear ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		totalDays = day;
		for (m = 1; m < month; m++)
			totalDays += mth[m]
		remDays = leapYear ? 366 - totalDays : 365 - totalDays;

		 printf("Day of the year: %d\n", totalDays);
		 printf("Remaining days: %d\n", remDays);
	}
}
