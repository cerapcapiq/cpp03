/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:08:02 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/15 12:34:29 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"


class FragTrap: public ClapTrap
{
    private :


    public :
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);

    FragTrap &operator=(const FragTrap &copy);

    void highFivesGuys();
};