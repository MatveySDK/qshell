//Главные .h файл
#include "baselibary.h"

//Дескрипторы
HANDLE hConsole;
HANDLE hConsoleInput;

//Исходный код
int main()
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTitle("qshell");
    system("cls");
    
    const int BUFFER_SIZE = 1024;
    char* buffer = new char[BUFFER_SIZE];

//Получение имени пользователя
while (true) 
{
    TCHAR username[256];
    DWORD usernameLen = sizeof(username);
    GetUserName(username, &usernameLen);
    std::string prompt = std::string(username) + ".qshell.test: ";
    std::cout << prompt;

    int bytesRead;
    HANDLE hConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
    if (ReadFile(hConsoleInput, buffer, BUFFER_SIZE - 1, reinterpret_cast<LPDWORD>(&bytesRead), NULL) == FALSE) {
        break;
    }
    std::cout << "\n";
}
    getchar();
}