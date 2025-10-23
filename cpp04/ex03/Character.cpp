/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:40:22 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/23 15:44:33 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {Character("");}

Character::Character(std::string name) {
    this->name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    floor_size = 0;
    floor = NULL;
}

Character::Character(const Character &obj) {
    name = obj.name;
    for (int i = 0; i < 4; i++) {
        if (obj.inventory[i])
            inventory[i] = obj.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    if (obj.floor)
        floor = obj.floor;
    else
        floor = NULL;
}

Character &Character::operator=(const Character &obj) {
    if (this != &obj) {
        name = obj.name;
        for (int i = 0; i < 4; i++) {
            if (obj.inventory[i])
                inventory[i] = obj.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
        if (obj.floor)
            floor = obj.floor;
        else
            floor = NULL;
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] != NULL) {
            delete inventory[i];
        }
    }
    if (floor)
        delete[] floor;
}

std::string const &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == NULL) {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    int j;
    AMateria **new_floor;
    
    j = 0;
    floor_size += 1;
    new_floor = new AMateria*[floor_size]();
    if (floor) {
        for (int i = 0; floor[i] != NULL; i++)
            new_floor[i] = floor[i]->clone();
    }
    while (new_floor[j] != NULL)
        j++;
    new_floor[j] = inventory[idx]->clone();
    inventory[idx] = NULL;
    if (floor != NULL)
        delete[] floor;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 4 && idx >= 0 && inventory[idx])
        inventory[idx]->use(target);
}
