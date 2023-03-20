/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:09:43 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/20 13:48:07 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
    std::cout << "Constructor for FragTrap is called, the name is only " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
        std::cout << "Copy constructor for FragTrap is called" << std::endl;
        *this = copy;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
    std::cout << "Constructor for FragTrap is called by name " <<  name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " just want a high fives."<< std::endl;
}



FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap " << name <<  " is called." << std::endl;
}
