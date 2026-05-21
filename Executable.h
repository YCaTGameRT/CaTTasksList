#ifndef _EXECUTABLE_H_
#define _EXECUTABLE_H_

#include "TaskList.h"
#include "TerminalOut.h"

class Executable {
public:
    Executable();

    void Run();
private:
    TaskList list;
    TerminalOut out;
    bool isRunning;
};

#endif