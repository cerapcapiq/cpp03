/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:24:55 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/20 15:03:50 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_trap")
{    this->name = "default";
    this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
    std::cout << "Constructor for DiamondTrap is called, the name is only " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(), ScavTrap(),  FragTrap()
{
        std::cout << "Copy constructor for DiamondTrap is called" << std::endl; 
        *this = copy;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name  + "_clap_name")
{
     this->name = name;
    this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
    std::cout << "Constructor for DiamondTrap is called by name " <<  this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
    this->name = copy.name + "_clap_name";
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}


void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::status() const 
{
  std::cout << "Name:" << this->name << " HP:" << this->hit_points
  << " EP:" << this->energy_points << " ATT:" << this->attack_damage << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "who am I? am I a ClapTrap " << this->ClapTrap::name << " or am I a DiamondTrap " << this->name << " ?" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor for DiamondTrap " << name <<  " is called." << std::endl;
}
