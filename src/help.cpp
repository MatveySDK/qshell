#include "help.h"
#include "baselibary.h"

void help() 
{
    const char* help_command = R"(
    #help
    #exit
    #clear
    #logo      
)";
    std::cout << help_command;
}
