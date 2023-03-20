/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:25:02 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/20 15:01:58 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"



int main()
{
    
     /*{ClapTrap enemy1 = ClapTrap("enemy1");
    ClapTrap enemy2("not_default");

    std::cout << "\t" << "/" << "testing ClapTrap first" << std::endl;
    enemy1.attack("GIGACHAD");

    std::cout << "\t" << "checking death working" << std::endl;
    enemy1.takeDamage(5);
    enemy1.beRepaired(4);
    enemy1.attack("GIGACHAD");

    std::cout << "\t" << "checking heals working" << std::endl;
    enemy2.beRepaired(6);
    enemy2.takeDamage(3);
    enemy2.beRepaired(4);
    }
*/
{
std::cout << "\t" << "/" << "testing  DiamondTrap begins" << std::endl;
    DiamondTrap enemy1 = DiamondTrap("enemy1");
    DiamondTrap enemy2("not_default");
    DiamondTrap enemy3;
    DiamondTrap enemy4 = enemy3;
    DiamondTrap enemy5;
    enemy5 = enemy3;

    
    enemy1.attack("GIGACHAD");

    std::cout << "\t" << "checking death working" << std::endl;
    enemy1.takeDamage(50);
    enemy1.beRepaired(40);
    enemy1.takeDamage(90);
    enemy1.beRepaired(40);
    enemy1.attack("GIGACHAD");

    std::cout << "\t" << "checking heals working" << std::endl;
    enemy5.beRepaired(60);
    enemy5.takeDamage(30);
    enemy5.beRepaired(40);

    enemy1.whoAmI();

    enemy3.status();

   //std::cout << "\t" << "checking energy points working" << std::endl;
    //for (int i = 0; i < 102; i++)
   // {
    //    enemy2.attack("me");
    //    std::cout << i << std::endl;
   // }
}

    std::cout << "\t" << "/" << "testing ends" << std::endl;

}
