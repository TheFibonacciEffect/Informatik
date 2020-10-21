#include <iostream>
#include <cassert>


// Functions to be implemented

// PRE:  a year greater or equal than 1900
// POST: returns whether that year was a leap year
bool is_leap_year(unsigned int year);

// PRE:  a year greater or equal than 1900
// POST: returns the number of days in that year
unsigned int count_days_in_year(unsigned int year);

// PRE:  a month between 1 and 12 and a year greater or equal than 1900
// POST: returns the number of days in the month of that year
unsigned int count_days_in_month(unsigned int month, unsigned int year);

// PRE:  n/a
// POST: returns whether the given values represent a valid date
bool is_valid_date(unsigned int day, unsigned int month, unsigned int year);

// PRE:  the given values represent a valid date
// POST: returns the number of days between January 1, 1900 and this date
unsigned int count_days(unsigned int day, unsigned int month, unsigned int year);

// PRE: the given values represent a valid date
// POST: prints the weekday
void print_weekday(unsigned int day, unsigned int month, unsigned int year);