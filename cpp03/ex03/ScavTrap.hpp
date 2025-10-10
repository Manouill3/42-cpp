/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:42:08 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 11:42:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public :

    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &obj);
    ScavTrap &operator=(const ScavTrap &obj);
    ~ScavTrap();
    
    void attack(const std::string &target);
    void guardGate();

protected:
    
    static const int def_energy_pts = 10;
};

#endif