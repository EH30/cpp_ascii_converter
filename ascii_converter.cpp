#include <iostream>
#include "osname.h"


void console_clear()
{
    if (os == 0 | os == 2)
    {
        system("clear");
    }else if (os == 1)
    {
        system("cls");
    }else{
        return;
    }
}

int main(int argc, char *argv[])
{
    console_clear();
    char inputs[1];
    std::cout << "\033[1;32m Enter One character: \033[1;0m";
    std::cin >> inputs;

    for (int x=0; x< sizeof(inputs); x++)
    {
        int e = inputs[x];
        std::cout << "\033[1;32m ASCII Code OF " << inputs[x] << ": " << "\033[1;0m"  << e <<std::endl;
    }
    return 0;
}
