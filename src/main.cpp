#include "baselibary.h"
#include "clear.h"
#include "exit.h"
//#include "help.h"
#include "logo.h"
//#include "API.h"

/*colors
    black = 0
    blue = 1
    green = 2
    violet = 3
    red = 4
    violet2 = 5
    yellow = 6
    white = 7
    gray = 8
    white_blue = 9
*/

HANDLE hConsole;
HANDLE hConsoleInput;

int main()
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTitle("qshell");
    system("cls");

    const int BUFFER_SIZE = 1024;
    char* buffer = new char[BUFFER_SIZE];

    while (true) {
        TCHAR username[256];
        DWORD usernameLen = sizeof(username);
        GetUserName(username, &usernameLen);
        std::string prompt = std::string(username) + ".shell.dev: ";
        std::cout << prompt;

        int bytesRead;
        HANDLE hConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
        if (ReadFile(hConsoleInput, buffer, BUFFER_SIZE - 1, reinterpret_cast<LPDWORD>(&bytesRead), NULL) == FALSE) {
            break;
        }
        std::cout << "\n";

        //Commands
        if (std::string(buffer).find("#clear") != std::string::npos) 
        {
            clearScreen();
        }

        if (std::string(buffer).find("#exit") != std::string::npos) 
        {
            exitProgram();
            return 1;
        }

        /*if (std::string(buffer).find("#help") != std::string::npos) 
        {
            help();
        }*/

        if (std::string(buffer).find("#logo") != std::string::npos) 
        {
            logoscreen();
        }
    }
    getchar();
}