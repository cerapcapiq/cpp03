/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:53:19 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/15 12:56:03 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    private :
    bool guard;

    public :
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);

    ScavTrap &operator=(const ScavTrap &copy);

    void beRepaired(int amount);


    void attack(const std::string& target);
    void guardGate();

};