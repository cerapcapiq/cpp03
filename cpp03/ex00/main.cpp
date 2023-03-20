/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:25:02 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/20 13:21:24 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
    ClapTrap enemy1 = ClapTrap("enemy1");
    ClapTrap enemy2("not_default");
    ClapTrap enemy3;
    ClapTrap enemy4 = enemy3;
    ClapTrap enemy5;
    enemy5 = enemy3;

    std::cout << "\t" << "/" << "testing begins" << std::endl;
    enemy1.attack("GIGACHAD");

    std::cout << "\t" << "checking death working" << std::endl;
    enemy1.takeDamage(5);
    enemy1.beRepaired(4);
    enemy1.takeDamage(9);
    enemy1.beRepaired(4);
    enemy1.attack("GIGACHAD");

    std::cout << "\t" << "checking heals working" << std::endl;
    enemy5.beRepaired(6);
    enemy5.takeDamage(3);
    enemy5.beRepaired(4);

    std::cout << "\t" << "checking energy points working" << std::endl;
    for (int i = 0; i < 11; i++)
    {
        enemy2.attack("me");
    }

    std::cout << "\t" << "/" << "testing ends" << std::endl;

}
