/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:58 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/23 13:57:14 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) {
    this->type = type;
}

AMateria::AMateria(const AMateria &obj) {
    name = obj.name;
}

AMateria &AMateria::operator=(const AMateria &obj) {
    if (this != &obj)
        name = obj.name;
    return *this;
}

std::string const &AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter &target) {
    std::cout << "This is a default materia use on " << target.getName() << std::endl;
}
