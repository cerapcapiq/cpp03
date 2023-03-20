/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:25:02 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/20 14:28:37 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



int main()
{
     /*ClapTrap enemy1 = ClapTrap("enemy1");
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
*/
std::cout << "\t" << "/" << "testing  ScavTrap begins" << std::endl;
    ScavTrap enemy1 = ScavTrap("enemy1");
    ScavTrap enemy2("not_default");
    ScavTrap enemy3;
    ScavTrap enemy4 = enemy3;
    ScavTrap enemy5;
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

    enemy1.guardGate();
    enemy1.guardGate();
    enemy2.guardGate();

   /*std::cout << "\t" << "checking energy points working" << std::endl;
    for (int i = 0; i < 100; i++)
        enemy2.attack("me");
*/
    std::cout << "\t" << "/" << "testing ends" << std::endl;

}