#include <iostream>
#include <string_view>

enum class Month {
  Jan, Feb, Mar, Apr,
  May, Jun, Jul, Aug,
  Sep, Oct, Nov, Dec
};

static std::string_view month_to_string(Month month) {
  switch (month) {
    using enum Month;
      case Jan: return "January";
      case Feb: return "February";
      case Mar: return "March";
      case Apr: return "April";
      case May: return "May";
      case Jun: return "June";
      case Jul: return "July";
      case Aug: return "August";
      case Sep: return "September";
      case Oct: return "October";
      case Nov: return "November";
      case Dec: return "December";
      default: return "None";
  }
}


static int usingEnum() {

  Month month{ Month::Apr };
  std::cout << "month : " << month_to_string(month) << std::endl;

  return 0;
}