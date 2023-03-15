/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:54:14 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/15 12:55:58 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->guard = false;
    std::cout << "Constructor for ScavTrap is called, the name is only " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
        std::cout << "Copy constructor for ScavTrap is called" << std::endl;
        this->guard = copy.guard;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->guard = false;
    std::cout << "Constructor for ScavTrap is called by name " <<  name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}


void ScavTrap::attack(const std::string& target)
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
    std::cout << "ScavTrap" << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
    }
}

void ScavTrap::beRepaired(int amount)
{
    if (this->energy_points == 0)
    {
        std::cout << " not enough energy to heal" << std::endl;
    }
    else if (this->hit_points == 0)
    {
        std::cout << this->name << " already dead" << std::endl;
    } 
    else if (this->hit_points >= 100)
    {
        std::cout << this->name << " already has full HP" << std::endl;
    }
    else{

    std::cout << "ScavTrap received " << amount << "heals. Now current HP is " << this->hit_points << std::endl;
    	this->hit_points += amount;
    std::cout << "ScavTrap " << this->name << " EP is now " << this->energy_points << std::endl;
            this->energy_points --;
    }
}



void ScavTrap::takeDamage(int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << this->name << " already dead" << std::endl;
    }
    else if (amount > this->hit_points)
        this->hit_points = 0;
    else
        this->hit_points -= amount;
    std::cout << "ScavTrap " << this->name << " get " << amount << " damage" << std::endl;
    std::cout << "ScavTrap " << "current hp is " << this->hit_points << std::endl;
    if (this->hit_points == 0)
    {
        std::cout << this->name << " has died. noob." << std::endl;
        return;
    }
}

void guardGate()
{
    if (this->guard == false)
    {
        this->guard == true;
    std::cout << "ScavTrap " << name << " is entering Gate keeper mode "<< std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " is already in. "<< std::endl;
}



ScavTrap::~ScavTrap()
{
    std::cout << "Destructor for ScavTrap " << name <<  "is called for" << std::endl;
}
