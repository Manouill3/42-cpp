/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:52:00 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/22 13:33:45 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    hit_pts = 10;
    max_hp = hit_pts;
    energy_pts = 10;
    atk_damage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    hit_pts = 10;
    max_hp = hit_pts;
    energy_pts = 10;
    atk_damage = 0;
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
    name = obj.name;
    hit_pts = obj.hit_pts;
    max_hp = obj.max_hp;
    energy_pts = obj.energy_pts;
    atk_damage = obj.atk_damage;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
    if (this != &obj) {
        name = obj.name;
        hit_pts = obj.hit_pts;
        max_hp = obj.max_hp;
        energy_pts = obj.energy_pts;
        atk_damage = obj.atk_damage;
    }
    std::cout << "Copy assignement called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {std::cout << "Destructor called" << std::endl;}

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
    std::cout << "new energy : " << this->energy_pts << std::endl;
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
    std::cout << "new life : " << this->hit_pts << std::endl;
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
    if (hit_pts > max_hp || hit_pts < 0)
        hit_pts = max_hp;
    energy_pts -= 1;
    std::cout << "new life : " << this->hit_pts << std::endl;
    std::cout << "new energy : " << this->energy_pts << std::endl;
}
