/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:35:16 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/20 11:26:01 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) {
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    hit_pts = def_hit_pts;
    energy_pts = def_energy_pts;
    atk_damage = def_atk_damage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) {
    name = obj.name;
    hit_pts = obj.hit_pts;
    energy_pts = obj.energy_pts;
    atk_damage = obj.atk_damage;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
    if (this != &obj) {
        name = obj.name;
        hit_pts = obj.hit_pts;
        energy_pts = obj.energy_pts;
        atk_damage = obj.atk_damage;
    }
    std::cout << "DiamondTrap copy assignement called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {std::cout << "DiamondTrap destructor called" << std::endl;}

void    DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << name << std::endl;
    std::cout << "My ClapTrap name is " << ClapTrap::name << std::endl;
}
