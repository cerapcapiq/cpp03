/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:53:19 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/15 12:33:19 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private :
    bool guardGate;

    public :
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);

    ScavTrap &operator=(const ScavTrap &copy);


    void attack(const std::string& target);
    void guardGate();

};