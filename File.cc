#include "File.h"
#include <iostream>

// Constructor
File::File(std::string name, std::string content, Date& date)
    : name(name), content(content), date(date) {}

// lessThan function
bool File::lessThan(File& other) {
    return date.lessThan(other.date);
}

// print function
void File::print() {
    std::cout << "File: " << name << std::endl;
    std::cout << "Date added: ";
    date.print();
    std::cout << std::endl;
}

// printContents function
void File::printContents() {
    print();
    std::cout << "Content:" << std::endl;
    std::cout << content << std::endl;
}
