#ifndef DATE_H
#define DATE_H

class Date {
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minutes;
public:
    Date();
    Date(unsigned int year, unsigned int month, unsigned int day, unsigned int hour, unsigned int minutes);
    bool operator==(Date &other);
    bool operator<(Date &other);
    bool operator>(Date &other);
};

#endif