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

ScavTrap::ScavTrap() {
    hit_pts = 100;
    max_hp = hit_pts;
    energy_pts = 50;
    atk_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    hit_pts = 100;
    max_hp = hit_pts;
    energy_pts = 50;
    atk_damage = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
    name = obj.name;
    hit_pts = obj.hit_pts;
    max_hp = obj.max_hp;
    energy_pts = obj.energy_pts;
    atk_damage = obj.atk_damage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
    if (this != &obj) {
        name = obj.name;
        hit_pts = obj.hit_pts;
        max_hp = obj.max_hp;
        energy_pts = obj.energy_pts;
        atk_damage = obj.atk_damage;
    }
    std::cout << "ScavTrap copy assignement called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {std::cout << "ScavTrap destructor called" << std::endl;}

void ScavTrap::attack(const std::string &target) {
    if (hit_pts <= 0) {
        std::cout << name << " is dead !" << std::endl;
        return ;
    }
    if (energy_pts <= 0) {
        std::cout << name << " is exhausted !" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->atk_damage;
    std::cout << " points of damage!" << std::endl;
    energy_pts -= 1;
    std::cout << "new energy : " << this->energy_pts << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in gate keeper mode!" << std::endl;
}
