/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:45:49 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/20 14:57:12 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string name) {
    this->name = name;
}

Cure::Cure(const Cure &obj) {
    name = obj.name;
    type = obj.type;
}

Cure &Cure::operator=(const Cure &obj) {
    if (this != &obj) {
        name = obj.name;
        type = obj.type;
    }
}

Cure::~Cure() {}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const {
    return (new Cure(*this));
}
