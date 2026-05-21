#ifndef _TASK_H_
#define _TASK_H_

#include <string>

class Task {
public:
    Task(int id, std::string text);

    void DoTask();

    int GetId() const;
    std::string GetText() const;
    bool GetStatus() const;
private:
    bool isReady;
    std::string text;
    int id;
};

#endif