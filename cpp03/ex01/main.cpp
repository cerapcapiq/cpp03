/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:59:59 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/15 12:02:32 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    //ScavTrap enemy1 = ScavTrap("enemy1");
    //ScavTrap enemy2("not_default");
    ScavTrap enemy1;


    enemy1.attack("GIGACHAD");
    enemy1.takeDamage(5);
    enemy1.takeDamage(4);
    enemy1.beRepaired(4);
    
    //enemy3.attack(enemy1);

}