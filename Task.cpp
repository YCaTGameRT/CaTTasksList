#include "Task.h"

std::pair<bool, std::string> Task::GetTask() {
    return std::make_pair(this->isReady, this->text);
}