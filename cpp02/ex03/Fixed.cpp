/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:25:36 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/03 15:10:48 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {raw = 0;}

Fixed::Fixed(const int val) {raw = val * (1 << bits);}

Fixed::Fixed(const float val) {raw = roundf(val * (1 << bits));}

Fixed::Fixed(const Fixed &obj) {raw = obj.raw;}

Fixed &Fixed::operator=(const Fixed &obj) {
    if (this != &obj)
        raw = obj.raw;
    return *this;
}

Fixed::~Fixed() {}

Fixed Fixed::operator+(const Fixed &obj) const {return (this->toFloat() + obj.toFloat());}
Fixed Fixed::operator-(const Fixed &obj) const {return (this->toFloat() - obj.toFloat());}
Fixed Fixed::operator*(const Fixed &obj) const {return (this->toFloat() * obj.toFloat());}
Fixed Fixed::operator/(const Fixed &obj) const {return (this->toFloat() / obj.toFloat());}

bool Fixed::operator>(const Fixed &obj) const {return this->toFloat() > obj.toFloat();}
bool Fixed::operator<(const Fixed &obj) const {return this->toFloat() < obj.toFloat();}
bool Fixed::operator>=(const Fixed &obj) const {return this->toFloat() >= obj.toFloat();}
bool Fixed::operator<=(const Fixed &obj) const {return this->toFloat() <= obj.toFloat();}
bool Fixed::operator==(const Fixed &obj) const {return this->toFloat() == obj.toFloat();}
bool Fixed::operator!=(const Fixed &obj) const {return this->toFloat() != obj.toFloat();}

Fixed Fixed::operator++() {
    this->raw++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp;
    
    tmp = *this;
    this->raw++;
    return tmp;
}

Fixed Fixed::operator--() {
    this->raw--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp;
    
    tmp = *this;
    this->raw--;
    return tmp;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2) {
    if (obj1 > obj2)
        return obj2;
    return obj1;
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2) {
    if (obj1 > obj2)
        return obj2;
    return obj1;
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2) {
    if (obj1 < obj2)
        return obj2;
    return obj1;
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2) {
    if (obj1 < obj2)
        return obj2;
    return obj1;
}

int Fixed::getRawBits(void) const {return raw;}

void Fixed::setRawBits(int const raw) {this->raw = raw;}

float Fixed::toFloat(void) const {return (float)raw / (1 << bits);}

int Fixed::toInt(void) const {return raw / (1 << bits);}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) {
    output << obj.toFloat();
    return output;
}
