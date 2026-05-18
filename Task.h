#ifndef _TASK_H_
#define _TASK_H_

#include <string>

class Task {
public:
    std::pair<bool, std::string> GetTask();
private:
    bool isReady;
    std::string text;
};

#endif