#include <iostream>
#include <iomanip>
#include <string>

const int MONTHS_IN_YEAR = 12;
const int DAYS_IN_WEEK = 7;

std::string weekdays[DAYS_IN_WEEK] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int daysInMonth[MONTHS_IN_YEAR] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year)
{
  // Leap year is divisible by 4, but not by 100, unless also divisible by 400
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void printCalendar(int year, int startDay)
{
  if (isLeapYear(year))
  {
    daysInMonth[1] = 29; // February has 29 days in a leap year
  }

  std::cout << "Calendar for " << year << "\n\n";
  std::cout << "   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

  int dayOfWeek = startDay;
  for (int month = 0; month < MONTHS_IN_YEAR; ++month)
  {
    std::cout << "\n"
              << std::setw(20) << std::setfill(' ') << "Month " << (month + 1) << "\n";
    std::cout << "   ";

    // Print initial spaces
    for (int space = 0; space < dayOfWeek; ++space)
    {
      std::cout << "     ";
    }

    // Print days of the month
    for (int day = 1; day <= daysInMonth[month]; ++day)
    {
      std::cout << std::setw(4) << day << " ";
      dayOfWeek = (dayOfWeek + 1) % DAYS_IN_WEEK;

      if (dayOfWeek == 0)
      {
        std::cout << "\n   ";
      }
    }
    std::cout << "\n";
  }
}

int main()
{
  int year;
  std::string firstDay;

  std::cout << "Enter the year: ";
  std::cin >> year;
  std::cin.ignore();

  std::cout << "Enter the first weekday of the year (e.g., Monday): ";
  std::getline(std::cin, firstDay);

  int startDay = -1;
  for (int i = 0; i < DAYS_IN_WEEK; ++i)
  {
    if (weekdays[i] == firstDay)
    {
      startDay = i;
      break;
    }
  }

  if (startDay == -1)
  {
    std::cout << "Invalid weekday entered. Please use one of the following: ";
    for (const auto &day : weekdays)
    {
      std::cout << day << " ";
    }
    std::cout << "\n";
    return 1;
  }

  printCalendar(year, startDay);

  return 0;
}
