#include "meeting.h"
#include "init.h"


void Meeting::copy(const Meeting& other) {
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);
    this->comment = new char[strlen(other.comment) + 1];
    strcpy(this->comment, other.comment);
    this->startingDate = other.startingDate;
    this->endingDate = other.endingDate;
}
    
void Meeting::free() {
    delete[] this->name;
    this->name = nullptr;
    delete[] this->comment;
    this->comment = nullptr;
}

Meeting::Meeting(const char* name, const char* comment, Date startingDate, Date endingDate) {
    
}

Meeting::~Meeting(){
    free();
}

Meeting::Meeting(const Meeting& other) {
    copy(other);
}

Meeting& Meeting::operator=(const Meeting& other) {
    if(this != &other) {
        free();
        copy(other);
    }
    return *this;
}