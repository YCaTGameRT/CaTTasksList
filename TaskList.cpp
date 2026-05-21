#include "TaskList.h"

void TaskList::AddTask(const std::string& text) {
    int id = tasks.size() +1;
    tasks.push_back(Task(id, text));
}
void TaskList::DoTask(int id) {
    for (auto& task : tasks) {
        if (task.GetId() == id) {
            task.DoTask();
            break;
        }
    }
}

const std::vector<Task>& TaskList::GetTasks() const {
    return tasks;
}