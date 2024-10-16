#include "clear.h"
#include "baselibary.h"

void clearScreen() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");  // for Windows platforms, use cls command to clear the screen
    #else
        //std::cout << "\033[2J\033[H";  // for Unix/Linux/MacOS platforms, use ANSI escape sequence to clear the screen
    #endif

    std::cout.flush();
}