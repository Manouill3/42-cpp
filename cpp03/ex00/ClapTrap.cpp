/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:52:00 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/07 20:33:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    hit_pts = 10;
    energy_pts = 10;
    atk_damage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {this = &obj;}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
    if (this != &obj) {
        name = obj.name;
        hit_pts = obj.hit_pts;
        energy_pts = obj.energy_pts;
        atk_damage = obj.atk_damage;
    }
    return *this;
}

ClapTrap::~Claptrap() {std::cout << "Destructor called" << std::endl;}

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << this->name << std::endl;
    std::cout << " attacks " << target << std::endl;
    std::cout << ", causing " << this->atk_damage << std::endl;
    std::cout << " points of damage!" << std::endl;
    target.hit_pts -= this->atk_damage;
    this->energy_pts -= 1;
}

void Claptrap::takeDamage(unsigned int ammount) {
    std::cout << "ClapTrap " << this->name << std::endl;
    std::cout << " lost " << ammount << std::endl;
    std::cout << " hit points!" << std::endl;
    this->hit_pts -= ammount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->name << std::endl;
    std::cout << " regained " << ammount << std::endl;
    std::cout << " hit points!" << std::endl;
    this->hit_pts += ammount;
    this->energu_pts -= 1;
}
