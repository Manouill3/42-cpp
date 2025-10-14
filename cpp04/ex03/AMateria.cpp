/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:58 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/14 14:39:53 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) {
    this->type = type;
}

AMateria::AMateria(const AMateria &obj) {
    type = obj.type;
}

AMateria &AMateria::operator=(const AMateria &obj) {
    if (this != &obj)
        type = obj.type;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
    return type;
}
