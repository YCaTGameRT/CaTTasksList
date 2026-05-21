#include <locale.h>

#include "Executable.h"

int main() {
    setlocale(LC_ALL, "Russian");

    Executable exe;
    exe.Run();

    return 0;
}