#include <stdio.h>
#include <iostream>

#include "TerminalOut.h"

void TerminalOut::PrintTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        printf("Задач нет\n");
    }
    else {
        for (const auto& task :tasks) {
            printf("№%d\t%s\t%s\n", task.GetId(), task.GetText().c_str(), task.GetStatus() ? "выполнено" : "не выполнено");
        }
    }
}
void TerminalOut::PrintMenu() {
    printf("\n1. добавить задачу\n2. выполнить задачу\n3. показать задачи\n0. выход\nвведите номер действия >>: ");
}