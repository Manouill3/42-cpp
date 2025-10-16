/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:09:42 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 15:22:43 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string name) {
    this->name = name;
    type = "ice";
}

Ice::Ice(const Ice &obj) {
    name = obj.name;
}

Ice &Ice::operator=(const Ice &obj) {
    if (this != &obj) {
        name = obj.name;
    }
}

Ice::~Ice() {}

void Ice::use(ICharacter &target) {
    
}

Ice *Ice::clone() {}
