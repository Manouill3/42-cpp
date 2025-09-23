/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:01:45 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/23 11:09:48 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    weapon = NULL;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void) {
    if (weapon == NULL)
        std::cout << name << " attack with their fists" << std::endl;
    else
        std::cout << name << " attack with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
