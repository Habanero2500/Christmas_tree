#include "Christmas.hpp"

int main (void)
{
    int val(0);
    std::string str;
    std::cout << "How high would you like the christmas tree ? [1 to 25] "<< std::endl;
    std::cin >> str;
    val = std::stoi(str);

    if(val < 1 || val > 25)
    {
        std::cout << "This number is not handled by the program." << std::endl;
        return 1; 
    }
    display(val);
    return 0;
}