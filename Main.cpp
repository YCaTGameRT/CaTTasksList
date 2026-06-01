#ifdef __linux__
#include <locale.h>
#elif _WIN32
#include <Windows.h>
#endif

#include "Executable.h"

int main() {
    #ifdef __linux__
    setlocale(LC_ALL, "Russian");
    #elif _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    #endif
    

    Executable exe;
    exe.Run();

    return 0;
}