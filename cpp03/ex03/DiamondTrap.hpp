/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:24:11 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/15 12:51:16 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap: public FragTrap , public ScavTrap
{
    private :
    std::string name;

    public :
    DiamondTrap();

    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &copy);

    virtual ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &copy);


    void attack(const std::string& target);
    void whoAmI();
};