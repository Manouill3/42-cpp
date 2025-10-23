/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:52:23 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/22 13:15:06 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
  
private :

    std::string name;
    int hit_pts;
    int energy_pts;
    int atk_damage;

    int max_hp;
    
public :

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &obj);
    ClapTrap &operator=(const ClapTrap &obj);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int ammount);
    void beRepaired(unsigned int amount);
};

#endif