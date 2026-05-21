#include <stdio.h>
#include <iostream>

#include "Executable.h"

Executable::Executable() {
    isRunning = true;
}

void Executable::Run() {
    int choose, id;
    std::string text;
    while (isRunning) {
        out.PrintMenu();
        std::cin >> choose;
        std::cin.ignore();
        switch(choose) {
        case 1:
            printf("введите название задачи\n>>: ");
            std::getline(std::cin, text);
            list.AddTask(text);
            break;
        case 2:
            printf("введите номер задачи для выполнения\n>>: ");
            scanf("%d", &id);
            list.DoTask(id);
            break;
        case 3:
            out.PrintTasks(list.GetTasks());
            break;
        case 0:
            isRunning = false;
            break;
        default:
            printf("неверный ввод\n");
        }
    }
}
