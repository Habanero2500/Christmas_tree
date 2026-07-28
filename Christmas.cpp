#include "Christmas.hpp"

void display( int nbr )
{
    for(int i(0); i < nbr ;i++)
        std::cout << " ";
    std::cout << "*" << std::endl;

    for (int line = 0; line < nbr ; line++) // boucle for qui incremente la ligne 
    {
        for (int i(0); i  < (nbr - line - 1) ; i++)// boucle for qui incremente le caractère 
            std::cout << " " ; 
        std::cout << "/" ;
        for ( int o(0); o < (line * 2) ; o++ )
            std::cout << " ";
        std::cout << "\\" << std::endl ;
    }

}