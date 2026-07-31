#include "Christmas.hpp"

void display( int nbr )
{
    int y(0); // variables qui vont garder la largeur du sapin pour créer les volutes
    int p(0);
    int level(0);

    for(int i(0); i < nbr ;i++)
        std::cout << " ";
    std::cout << "*" << std::endl;

    for (int line = 0; line < nbr ; line++) // boucle for qui incremente la ligne 
    {
        
        if(line == 0 || line % 3 != 0)
        {
            // std::cout << "TEST : " << line << std::endl;
            for (int i(0); i  < (nbr - line + level) ; i++)// boucle for qui incremente le caractère 
            {
                std::cout << " " ; 
                y = i;
            }    
            std::cout << "/" ;
            // std::cout << "Valeur de y : " << y << std::endl;
            for ( int o(0); o < ((line * 2) - level) ; o++ )
            {
               std::cout << " ";
               p = o;
            }
            std::cout << "\\" << std::endl ;
            // std::cout << "Valeur de p : " << p << std::endl;
        }
        else 
        {
            // std::cout <<"OPIO"<< std::endl;
            for (int z(0); z < y + 1 ; z++)
                    std::cout << " " ; 
            std::cout << "/" ;
            for ( int q(0); q < p + 1 ; q++ )
               std::cout << " ";
            std::cout << "\\" << std::endl ;
            if (level == 0)
                level = 2;
            else
                level++;
                
        }
    }
}