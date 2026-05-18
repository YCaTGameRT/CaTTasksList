#ifndef _LIST_H_
#define _LIST_H_

#include <map>
#include <string>

#include "Task.h"

class List {
public:
    List(std::string title);
private:
    std::string title;
    std::map<int, Task> list;
};

#endif