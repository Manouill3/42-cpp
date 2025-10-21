/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:40:22 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/21 10:13:12 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name) {
    this->name = name;
}

Character::Character(const Character &obj) {
    name = obj.name;
    for (int i = 0; i < 4; i++)
        inventory[i] = obj.inventory[i]->clone();
}

Character &Character::operator=(const Character &obj) {
    if (this != &obj) {
        name = obj.name;
        for (int i = 0; i < 4; i++)
            inventory[i] = obj.inventory[i]->clone();
    }
    return *this;
}

Character::~Character() {}

std::string const &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    (void)m;
}

void Character::unequip(int idx) {
    (void)idx;    
}

void Character::use(int idx, ICharacter &target) {
    (void)idx;
    (void)target;
}
