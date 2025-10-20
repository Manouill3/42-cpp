/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:09:42 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/20 14:57:00 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string name) {
    this->name = name;
    type = "ice";
}

Ice::Ice(const Ice &obj) {
    name = obj.name;
    type = obj.type;
}

Ice &Ice::operator=(const Ice &obj) {
    if (this != &obj) {
        name = obj.name;
        type = obj.type;
    }
}

Ice::~Ice() {}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const {
    return (new Ice(*this));
}
