/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:45:49 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 14:28:39 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string name) {
    this->name = name;
}

Cure::Cure(const Cure &obj) {
    name = obj.name;
}

Cure &Cure::operator=(const Cure &obj) {
    if (this != &obj) {
        name = obj.name;
    }
}

Cure::~Cure() {}

void Cure::use(ICharacter &target) {
    
}

Cure *Cure::clone() {}
