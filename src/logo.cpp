#include "baselibary.h"
#include "logo.h"

void logoscreen()
{
    const char* asciiArt = R"(                                                                         
                                                                         
    ,----..        .--.--.      ,---,                  ,--,      ,--,    
   /   /   \      /  /    '.  ,--.' |                ,--.'|    ,--.'|    
  /   .     :    |  :  /`. /  |  |  :                |  | :    |  | :    
 .   /   ;.  \   ;  |  |--`   :  :  :                :  : '    :  : '    
.   ;   /  ` ;   |  :  ;_     :  |  |,--.    ,---.   |  ' |    |  ' |    
;   |  ; \ ; |    \  \    `.  |  :  '   |   /     \  '  | |    '  | |    
|   :  | ; | '     `----.   \ |  |   /' :  /    /  | |  | :    |  | :    
.   |  ' ' ' :     __ \  \  | '  :  | | | .    ' / | '  : |__  '  : |__  
'   ;  \; /  |    /  /`--'  / |  |  ' | : '   ;   /| |  | '.'| |  | '.'| 
 \   \  ',  . \  '--'.     /  |  :  :_:,' '   |  / | ;  :    ; ;  :    ; 
  ;   :      ; |   `--'---'   |  | ,'     |   :    | |  ,   /  |  ,   /  
   \   \ .'`--"               `--''        \   \  /   ---`-'    ---`-'   
    `---`                                   `----'                       
)";
    std::cout << asciiArt;
}