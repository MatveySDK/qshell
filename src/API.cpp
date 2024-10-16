/*#include "shell_api.h"

bool RunAs::runAs(const char* executable) {
    SHELLEXECUTEINFO sei = { 0 };
    sei.cbSize = sizeof(SHELLEXECUTEINFO);
    sei.lpVerb = "runas";
    sei.lpFile = executable;

    if (ShellExecute(NULL, "runas", SHELLEXECUTEINFO((LPWSTR)sei.lpFile), NULL, NULL, SW_SHOWNORMAL) < 32) {
        return false;
    }

    return true;
}*/