#include <stdio.h>

int main()
{
    int days, years, months, weeks, days_number, rem;
	
	scanf("%d", &days);
	
	years = days / 365;
	rem = days % 365;
	months = rem / 30;
	rem = rem % 30;
	weeks = rem / 7;
	days_number = rem % 7;
	
	printf("%d year(s) %d month(s) %d week(s) %d day(s)\n", years, months, weeks, days_number);
	
	return 0;
}