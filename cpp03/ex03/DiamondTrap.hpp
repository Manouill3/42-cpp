/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:35:31 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/22 14:09:22 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    
private :
    
    std::string name;

public :

    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap &operator=(const DiamondTrap &obj);
    ~DiamondTrap();

    void attack(const std::string &target);
    void whoAmI();
};

#endif