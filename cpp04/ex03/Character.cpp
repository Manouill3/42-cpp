/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:40:22 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 09:44:28 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name) {
    this->name = name;
}

Character::Character(const Character &obj) {
    name = obj.name;
}

Character &Character::operator=(const Character &obj) {
    if (this != &obj)
        name = obj.name;
}

Character::~Character() {}

std::string const &Character::getName() const {
    return name;
}
