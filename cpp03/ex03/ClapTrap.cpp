/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:22:39 by marvin            #+#    #+#             */
/*   Updated: 2025/10/09 14:48:01 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    this->name = "";
    hit_pts = 10;
    energy_pts = 10;
    atk_damage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    hit_pts = 10;
    energy_pts = 10;
    atk_damage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
    name = obj.name;
    hit_pts = obj.hit_pts;
    energy_pts = obj.energy_pts;
    atk_damage = obj.atk_damage;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
    if (this != &obj) {
        name = obj.name;
        hit_pts = obj.hit_pts;
        energy_pts = obj.energy_pts;
        atk_damage = obj.atk_damage;
    }
    std::cout << "ClapTrap copy assignement called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {std::cout << "ClapTrap destructor called" << std::endl;}

void ClapTrap::attack(const std::string &target) {
    if (hit_pts <= 0) {
        std::cout << name << " is dead !" << std::endl;
        return ;
    }
    if (energy_pts <= 0) {
        std::cout << name << " is exhausted !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->atk_damage;
    std::cout << " points of damage!" << std::endl;
    energy_pts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hit_pts <= 0) {
        std::cout << name << " is dead !" << std::endl;
        return ;
    }
    std::cout << name;
    std::cout << " lost " << amount;
    std::cout << " hit points!" << std::endl;
    hit_pts -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hit_pts <= 0) {
        std::cout << name << " is dead !" << std::endl;
        return ;
    }
    if (energy_pts <= 0) {
        std::cout << name << " is exhausted !" << std::endl;
        return ;
    }
    std::cout << name;
    std::cout << " regained " << amount;
    std::cout << " hit points!" << std::endl;
    hit_pts += amount;
    energy_pts -= 1;
}
