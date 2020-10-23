#include "calendar.h"
#include <iostream>

// PRE: a year greater or equal than 1900
// POST: returns whether that year was a leap year
bool is_leap_year(unsigned int year)
{
  if (year % 4 == 0 || (year % 400 == 0 && year % 100 != 0))
  {
    return true;
  }
  else
  {
    return false;
  }
  
}

// PRE: a year greater or equal than 1900
// POST: returns the number of days in that year
unsigned int count_days_in_year(unsigned int year)
{
  if (is_leap_year(year))
  {
    return 366;
  }
  else
  {
    return 365;
  }
}

// PRE: a month between 1 and 12 and a year greater or equal than 1900
// POST: returns the number of days in the month of that year
unsigned int count_days_in_month(unsigned int month, unsigned int year)
{
  switch (month)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
      break;
    
    case 2:
      if (is_leap_year(year))
      {
        return 29;
      }
      else
      {
        return 28;
      }
    default:
      return 30;
      break;
  }
  
}

// POST: returns whether the given values represent a valid date
bool is_valid_date(unsigned int day, unsigned int month, unsigned int year)
{
  if (day == count_days_in_month(month, year))
  {
    if ((1 <= month) && (month <= 12))
    {
      if (year >= 1900)
      {
        return true;
      }
    }
    
  }
  return false;
}

// PRE: the given values represent a valid date
// POST: returns the number of days between January 1, 1900 and this date
unsigned int count_days(unsigned int day, unsigned int month, unsigned int year)
{
  // assert(is_valid_date(day, month, year));

  int days = 0;
  
  year = year - 1900;

  for (int year_counter = 1; year_counter <= year; year_counter++)
  {
    days += count_days_in_year(year_counter);
  }

  for (int month_counter = 1; month_counter < month; month_counter++)
  {
    days += count_days_in_month(month_counter, year);
  }  
  days += day - 1;
  return days;
}

// PRE: the given values represent a valid date
// POST: prints the weekday
void print_weekday(unsigned int day, unsigned int month, unsigned int year)
{
  int weekday = (count_days(day, month, year))%7;
  switch (weekday)
  {
  case 0:
    std::cout << "monday" << "\n";
    break;
  case 1:
    std::cout << "tuesday" << "\n";
    break;
  case 2:
    std::cout << "wednesday" << "\n";
    break;
  case 3:
    std::cout << "thursday" << "\n";
    break;
  case 4:
    std::cout << "friday" << "\n";
    break;
  case 5:
    std::cout << "saturday" << "\n";
    break;
  case 6:
    std::cout << "sunday" << "\n";
    break;
  default:
    throw "whoopsie";
    break;
  }
}