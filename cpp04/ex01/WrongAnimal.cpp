/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:31:26 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 15:22:23 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
    type = obj.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
    if (this != &obj)
        type = obj.type;
    std::cout << "WrongAnimal copy assignement called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::setType(std::string type) {this->type = type;}
std::string WrongAnimal::getType() const {return type;}

void WrongAnimal::makeSound() const {
    std::cout << "No sound provided !" << std::endl;
}
