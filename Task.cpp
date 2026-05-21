#include "Task.h"

Task::Task(int id, std::string text) {
    this->id = id;
    this->text = text;
    isReady = false;
}

void Task::DoTask() {
    isReady = true;
}

int Task::GetId() const {
    return id;
}
std::string Task::GetText() const {
    return text;
}
bool Task::GetStatus() const {
    return isReady;
}