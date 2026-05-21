#ifndef _TASKLIST_H_
#define _TASKLIST_H_

#include <vector>

#include "Task.h"

class TaskList {
public:
    void AddTask(std::string text);
    void DoTask(int id);

    const std::vector<Task>& GetTasks() const;
private:
    std::vector<Task> tasks;
};

#endif