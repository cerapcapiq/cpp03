/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:25:02 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/14 14:40:16 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
    ClapTrap enemy1 = ClapTrap("enemy1");
    ClapTrap enemy2("not_default");
    ClapTrap enemy3;


    enemy1.attack("GIGACHAD");
    enemy1.takeDamage(5);
    enemy1.takeDamage(4);
    enemy1.beRepaired(4);
    
    //enemy3.attack(enemy1);

}