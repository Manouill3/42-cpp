/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:01:06 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/14 15:13:40 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type) {
    this->type = type;
}
Weapon::~Weapon(void) {}

std::string Weapon::getType(void) const {return type;}
void    Weapon::setType(std::string type) {this->type = type;}
