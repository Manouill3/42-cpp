/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:25:36 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/01 10:37:21 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &prev) {
    raw = prev.raw;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    if (this != &other)
        raw = other.raw;
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return raw;
}

void Fixed::setRawBits(int const raw) {
    this->raw = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

Fixed::Fixed(const int val) {
    raw = val * (1 << bits);
    std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(const float val) {
    raw = roundf(val * (1 << bits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
    return (float)raw / (1 << bits);
    std::cout << "toFloat member function called" << std::endl;
}

int Fixed::toInt(void) const {
    return raw / (1 << bits);
    std::cout << "toInt member function called" << std::endl;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixe) {
    output << fixe.toFloat();
    return output;
}
