#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
public:
    // Constructor
    File(std::string name, std::string content, Date& date);

    // Functions
    bool lessThan(File& other);
    void print();
    void printContents();

private:
    // Member variables
    std::string name;
    std::string content;
    Date date;  // Indicates when the File was last modified
};

#endif
