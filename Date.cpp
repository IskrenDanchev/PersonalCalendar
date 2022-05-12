#include "Date.h"

Date::Date(){
    this->year = 0;
    this->month = 0;
    this->day = 0;
    this->hour = 0;
    this->minutes = 0;
}
Date::Date(unsigned int year, unsigned int month, unsigned int day, unsigned int hour, unsigned int minutes) {
    this->year = year;
    this->month = month;
    this->day = day;
    this->hour = hour;
    this->minutes = minutes;
}

