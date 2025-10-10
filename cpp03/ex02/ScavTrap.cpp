/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:41:53 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 11:41:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    hit_pts = 10;
    energy_pts = 10;
    atk_damage = 0;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
    name = obj.name;
    hit_pts = obj.hit_pts;
    energy_pts = obj.energy_pts;
    atk_damage = obj.atk_damage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
    if (this != &obj) {
        name = obj.name;
        hit_pts = obj.hit_pts;
        energy_pts = obj.energy_pts;
        atk_damage = obj.atk_damage;
    }
    std::cout << "ScavTrap copy assignement called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {std::cout << "ScavTrap destructor called" << std::endl;}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->atk_damage;
    std::cout << " points of damage!" << std::endl;
    energy_pts -= 1;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in gate keeper mode!" << std::endl;
}
