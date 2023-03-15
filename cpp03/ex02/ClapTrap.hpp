/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:24:59 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/14 14:46:56 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    private :
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;


    public :
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);

    ClapTrap &operator=(const ClapTrap &copy);


    void attack(const std::string& target);
    void takeDamage( int amount);
    void beRepaired(int amount);

};

#endif