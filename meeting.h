#ifndef MEETING_H
#define MEETING_H

#include "Date.h"

class Meeting {
private:
    char* name;
    char* comment;
    Date startingDate;
    Date endingDate;
    void copy(const Meeting& other);
    void free();

public:
    Meeting(const char* name, const char* comment, Date startingDate, Date endingDate);
    ~Meeting();
    Meeting(const Meeting& other);
    Meeting& operator=(const Meeting& other);
};

#endif