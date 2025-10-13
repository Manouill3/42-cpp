/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:49:01 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 15:11:02 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj) {
    type = obj.type;
    std::cout << "Animal copy consturctor called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj) {
    if (this != &obj)
        type = obj.type;
    std::cout << "Animal copy assignement called" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::setType(std::string type) {this->type = type;}
std::string Animal::getType() const {return type;}

void Animal::makeSound() const {
    std::cout << "No sound provided !" << std::endl;
}
