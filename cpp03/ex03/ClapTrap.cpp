/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:25:08 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/15 12:06:25 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>



ClapTrap::ClapTrap() : name("default") , hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Constructor for ClapTrap is called, the name is only " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
        std::cout << "Copy constructor for ClapTrap is called" << std::endl;
        *this = copy;

}

ClapTrap::ClapTrap(std::string name) : name(name) , hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Constructor for ClapTrap is called by name " <<  name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
    {
        std::cout << "not enough energy to attack" << std::endl;
    }
    else if (this->hit_points == 0)
    {
        std::cout << name << "already dead" << std::endl;
    }
    else
    {
    std::cout << "ClapTrap" << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
    }
}

void ClapTrap::beRepaired(int amount)
{
    if (this->energy_points == 0)
    {
        std::cout << "not enough energy to heal" << std::endl;
    }
    else if (this->hit_points == 0)
    {
        std::cout << this->name << "already dead" << std::endl;
    } 
    else if (this->hit_points >= 10)
    {
        std::cout << this->name << "already has full HP" << std::endl;
    }
    else{

    std::cout << "ClapTrap received " << amount << "heals. Now current HP is " << this->hit_points << std::endl;
    	this->hit_points += amount;
    std::cout << "Claptrap " << this->name << " EP is now " << this->energy_points << std::endl;
            this->energy_points --;
    }
}



void ClapTrap::takeDamage(int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << this->name << " already dead" << std::endl;
    }
    else if (amount > this->hit_points)
        this->hit_points = 0;
    else
        this->hit_points -= amount;
    std::cout << "ClapTrap " << this->name << " get " << amount << "damage" << std::endl;
    std::cout << "ClapTrap " << "current hp is " << this->hit_points << std::endl;
    if (this->hit_points == 0)
    {
        std::cout << this->name << " has died. noob." << std::endl;
        return;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor for " << name << " is called" << std::endl;
}
