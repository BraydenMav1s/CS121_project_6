#include "Date.h"
#include <iostream>
#include <sstream>

Date::Date() {
    dateString = "0/0/0000";
    month = 0;
    day = 0;
    year = 0;
}

void Date::init(std::string dateString) {
    this->dateString = dateString;

    std::stringstream ss(dateString);
    char slash;  // Used to ignore the '/' characters
    ss >> month >> slash >> day >> slash >> year;
}

void Date::printDate() const {
    std::string monthNames[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    if (month >= 1 && month <= 12) {
        std::cout << monthNames[month] << " " << day << ", " << year << std::endl;
    } else {
        std::cout << "Invalid Date: " << dateString << std::endl;
    }
}
