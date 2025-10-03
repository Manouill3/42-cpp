/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:25:47 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/03 15:35:38 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    
private :

    int raw;
    static const int bits = 8;

public :

    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj); 
    ~Fixed();
    
    Fixed operator+(const Fixed &obj) const;
    Fixed operator-(const Fixed &obj) const;
    Fixed operator*(const Fixed &obj) const;
    Fixed operator/(const Fixed &obj) const;
    
    bool operator>(const Fixed &obj) const;
    bool operator<(const Fixed &obj) const;
    bool operator>=(const Fixed &obj) const;
    bool operator<=(const Fixed &obj) const;
    bool operator==(const Fixed &obj) const;
    bool operator!=(const Fixed &obj) const;
    
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    
    static Fixed &min(Fixed &obj1, Fixed &obj2);
    static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
    static Fixed &max(Fixed &obj1, Fixed &obj2);
    static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &obj);

#endif //FIXED_HPP