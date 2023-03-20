/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:53:19 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/20 10:40:47 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private :
    bool guard;

    public :
    ScavTrap();
    virtual ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);

    ScavTrap &operator=(const ScavTrap &copy);


    void attack(const std::string& target);
    void guardGate();

};