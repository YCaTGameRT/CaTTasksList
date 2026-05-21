#ifndef _TERMINALOUT_H_
#define _TERMINALOUT_H_

#include <vector>

#include "Task.h"

class TerminalOut {
public:
    void PrintTasks(const std::vector<Task>& tasks);
    void PrintMenu();
private:

};

#endif