/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:00:00 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/09 14:49:33 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    name = "";
    hit_pts = 100;
    energy_pts = 100;
    atk_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->name = name;
    hit_pts = 100;
    energy_pts = 100;
    atk_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
    name = obj.name;
    hit_pts = obj.hit_pts;
    energy_pts = obj.energy_pts;
    atk_damage = obj.atk_damage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
    if (this != &obj) {
        name = obj.name;
        hit_pts = obj.hit_pts;
        energy_pts = obj.energy_pts;
        atk_damage = obj.atk_damage;
    }
    std::cout << "FragTrap copy assignement called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {std::cout << "FragTrap destructor called" << std::endl;}

void FragTrap::attack(const std::string &target) {
    if (hit_pts <= 0) {
        std::cout << name << " is dead !" << std::endl;
        return ;
    }
    if (energy_pts <= 0) {
        std::cout << name << " is exhausted !" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->atk_damage;
    std::cout << " points of damage!" << std::endl;
    energy_pts -= 1;
}

void FragTrap::highFivesGuys() {
    std::cout << "Can i get a HIGH FIVE ???" << std::endl;
}
